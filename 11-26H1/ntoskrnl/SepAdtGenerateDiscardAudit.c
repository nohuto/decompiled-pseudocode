/*
 * XREFs of SepAdtGenerateDiscardAudit @ 0x140818B60
 * Callers:
 *     SepAdtDetermineInsertQueue @ 0x1404AF180 (SepAdtDetermineInsertQueue.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtGenerateDiscardAudit(unsigned int *P)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rax
  _DWORD Src[12]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h]
  int v7; // [rsp+58h] [rbp-A8h]
  int v8; // [rsp+5Ch] [rbp-A4h]
  const int *v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+78h] [rbp-88h]
  int v11; // [rsp+7Ch] [rbp-84h]
  __int64 v12; // [rsp+80h] [rbp-80h]

  v1 = *(__int64 *)((char *)&RtlpBootStatHandleLock.116 + 4);
  memset_0(Src, 0, 0x418uLL);
  v3 = *(unsigned __int8 *)(v1 + 1);
  Src[0] = 1;
  Src[4] = 524390;
  Src[1] = 4612;
  v6 = v1;
  Src[7] = 4 * v3 + 8;
  Src[6] = 4;
  v9 = &SeSubsystemName;
  v4 = P[8];
  v11 = 4;
  v12 = v4;
  v7 = 1;
  v8 = 32;
  v10 = 27;
  Src[2] = 3;
  SepAdtLogAuditRecord(Src);
  if ( *((_BYTE *)P + 36) )
    ExFreePoolWithTag(P, 0);
}
