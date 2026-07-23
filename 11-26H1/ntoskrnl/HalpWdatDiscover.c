/*
 * XREFs of HalpWdatDiscover @ 0x140599C24
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140599EB0 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatProcessWdrtInternalData @ 0x14059A224 (HalpWdatProcessWdrtInternalData.c)
 *     HalSocGetAcpiTable @ 0x14059A7D4 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpWdatDiscover()
{
  __int64 AcpiTable; // rbx
  __int64 v1; // rax
  int v2; // ecx
  __int64 v3; // rdi
  char v4; // si
  unsigned int v5; // r15d
  unsigned int v6; // r8d
  unsigned int v7; // r12d
  int v8; // r14d
  unsigned __int64 i; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[11]; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A4h] [rbp-5Ch]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+B4h] [rbp-4Ch]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  _BYTE v23[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-28h]
  unsigned int v25; // [rsp+E0h] [rbp-20h]
  unsigned int v26; // [rsp+E4h] [rbp-1Ch]
  unsigned int v27; // [rsp+E8h] [rbp-18h]
  char v28; // [rsp+180h] [rbp+80h] BYREF
  int v29; // [rsp+190h] [rbp+90h] BYREF
  int v30; // [rsp+198h] [rbp+98h] BYREF

  v30 = 0;
  v29 = 0;
  memset_0(v17, 0, 0x88uLL);
  memset_0(v23, 0, 0x70uLL);
  v16[0] = 1;
  v15 = 0LL;
  v16[1] = 144;
  AcpiTable = 0LL;
  v28 = 0;
  if ( !HalpIsMicrosoftCompatibleHvLoaded()
    || !HalpHvCpuManager
    || (HviGetHardwareFeatures((__int64)&v15), (v15 & 0x2000000) == 0) )
  {
    AcpiTable = HalSocGetAcpiTable(1413563479LL);
  }
  v1 = HalSocGetAcpiTable(1414677591LL);
  v3 = v1;
  if ( AcpiTable )
  {
    if ( (*(_BYTE *)(AcpiTable + 60) & 1) != 0 )
    {
      v4 = 1;
      v5 = *(_DWORD *)(AcpiTable + 52);
      v6 = *(_DWORD *)(AcpiTable + 56);
      v7 = *(_DWORD *)(AcpiTable + 48);
      v8 = (*(_DWORD *)(AcpiTable + 64) << 6) + 112;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(AcpiTable + 64); i = (unsigned int)(i + 1) )
      {
        v2 = 3 * i;
        if ( *(_BYTE *)(AcpiTable + 24 * i + 68) == 6 )
          goto LABEL_15;
      }
      goto LABEL_28;
    }
    return 0LL;
  }
  if ( !v1 )
    return 0LL;
  v24 = v1;
  v10 = HalpWdatProcessWdrtInternalData(v1, v23, &v29, &v28);
  v4 = v28;
  if ( v10 >= 0 )
  {
    if ( !v28 )
      return 0LL;
    v7 = v27;
    v6 = v26;
    v5 = v25;
    v8 = v29;
LABEL_15:
    if ( v7 && v5 >= v6 )
    {
      v21 = 163872;
      LOBYTE(v2) = 32;
      if ( (int)HalpWdatExecuteActionBeforeInitialize(v2, i, (unsigned int)&v30, AcpiTable, v3) >= 0 && v30 == 1 )
      {
        v21 = 426016;
        LOBYTE(v12) = 33;
        HalpWdatExecuteActionBeforeInitialize(v12, v11, 0, AcpiTable, v3);
      }
      v13 = v7 * (unsigned __int64)v5 / 0x3E8;
      if ( v13 > 0x12C436C73CE5LL )
      {
        v19 = 64;
LABEL_26:
        v20 = 894000LL;
        v17[0] = HalpWdatInitialize;
        v17[2] = 0LL;
        v17[3] = HalpWdatArmTimer;
        v17[10] = 0LL;
        v17[4] = HalpWdatStop;
        v18 = v8;
        v22 = 13LL;
        HalpTimerRegister(v16, 0LL);
        goto LABEL_27;
      }
      i = 894000 * v13;
      v2 = 63;
      v19 = 63;
      do
      {
        if ( (1LL << v2) - 1 < i )
          break;
        --v2;
      }
      while ( v2 );
      v19 = v2;
      if ( v2 )
        goto LABEL_26;
    }
  }
LABEL_27:
  if ( v4 )
  {
LABEL_28:
    LOBYTE(v2) = 11;
    HalpWdatExecuteActionBeforeInitialize(v2, i, 0, AcpiTable, v3);
  }
  return 0LL;
}
