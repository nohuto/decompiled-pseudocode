/*
 * XREFs of ObpDereferenceNamedObject @ 0x1403E1A1C
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

void __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax
  __int64 v5; // rax

  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1, -1, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)],
        a1 + 48,
        1uLL,
        *(_QWORD *)(a1 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a1 + 48, 2uLL, BugCheckParameter4);
    if ( KeAreAllApcsDisabled() )
    {
      ObpDeferObjectDeletion(a1);
    }
    else
    {
      v5 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
      if ( v5 )
        ObpHandleRevocationBlockRemoveObject(v5);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a1);
      ObpRemoveObjectRoutine(a1, 0LL);
    }
  }
}
