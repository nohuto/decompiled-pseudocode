/*
 * XREFs of ExpLookasideMgrHotAddProcessor @ 0x1406D18DC
 * Callers:
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 */

__int64 __fastcall ExpLookasideMgrHotAddProcessor(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned int v10; // r9d

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = 2LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  v4 = *((_DWORD *)ExpPerProcLookasideMgr + 2 * v3 + 150);
  if ( v4 )
  {
    v5 = *((_QWORD *)ExpPerProcLookasideMgr + v3 + 76);
    v6 = v4;
    do
    {
      v7 = RtlCountSetBitsAffinityEx(*(unsigned __int16 **)(v5 + 16));
      v9 = v5;
      if ( v7 >= v10 )
        v9 = v8;
      v5 += 32LL;
      v1 = v9;
      --v6;
    }
    while ( v6 );
  }
  return KeAddProcessorAffinityEx(*(unsigned __int16 **)(v1 + 16), v2);
}
