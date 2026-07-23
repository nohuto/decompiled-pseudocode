/*
 * XREFs of HalpMcStagingWriteData @ 0x14059643C
 * Callers:
 *     HalpMcStagingIssueLoadVerify @ 0x1405962F4 (HalpMcStagingIssueLoadVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMcStagingWriteData(_DWORD *a1, __int64 a2, unsigned int a3)
{
  signed __int32 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  signed __int32 v9[6]; // [rsp+0h] [rbp-18h] BYREF

  *(_OWORD *)v9 = 0LL;
  *(_QWORD *)v9 = 0x404000B8086LL;
  v4 = v9;
  v5 = 4LL;
  v9[2] = 3;
  do
  {
    a1[2] = *v4;
    _InterlockedOr(v9, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = 1024LL;
  v7 = (_DWORD *)(HalpMicrocodeData + a3);
  do
  {
    a1[2] = *v7;
    _InterlockedOr(v9, 0);
    ++v7;
    --v6;
  }
  while ( v6 );
  *a1 |= 0x80000000;
  _InterlockedOr(v9, 0);
  return 0LL;
}
