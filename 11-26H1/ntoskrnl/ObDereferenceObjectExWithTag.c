/*
 * XREFs of ObDereferenceObjectExWithTag @ 0x14047DD60
 * Callers:
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  signed __int64 BugCheckParameter4; // rbx

  v3 = BugCheckParameter2 - 48;
  v4 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v3, -(__int16)a2, a3);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, -(int)v4) - v4;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 + 24) ^ (unsigned __int64)BYTE1(v3)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v3 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3);
  }
  return BugCheckParameter4;
}
