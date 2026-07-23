/*
 * XREFs of MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14071591C
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     MiLaunchZeroCalibrationProcessor @ 0x1407156E0 (MiLaunchZeroCalibrationProcessor.c)
 */

void __fastcall MiWakeOnlyParticipatingProcessorsFromAssignedNode(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 *v5; // rdi
  unsigned int v6; // r13d
  __int64 *v7; // r12
  unsigned int i; // esi
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  if ( **(_DWORD **)a1 )
  {
    v6 = 0;
    v7 = MiEngineAffinity(*(_QWORD *)a1);
    for ( i = 0; i < *((unsigned __int16 *)v7 + 8); ++i )
    {
      *(_OWORD *)v11 = *(_OWORD *)(*(_QWORD *)(v1 + 104) + 16LL * i);
      v9 = v11[0];
      while ( v9 )
      {
        v10 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity(v11)];
        v9 &= ~*(_QWORD *)(v10 + 200);
        v11[0] = v9;
        MiLaunchZeroCalibrationProcessor(a1, v10, v6++);
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 192) + 1;
    if ( *(_DWORD *)(a1 + 192) != -1 )
    {
      v5 = KiProcessorBlock;
      do
        MiLaunchZeroCalibrationProcessor(a1, *v5++, v2++);
      while ( v2 < v4 );
    }
  }
}
