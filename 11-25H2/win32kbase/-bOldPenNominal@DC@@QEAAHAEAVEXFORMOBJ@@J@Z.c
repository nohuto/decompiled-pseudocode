/*
 * XREFs of ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140091EDC
 * Callers:
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14009058C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtVts @ 0x140092F90 (bCvtVts.c)
 */

__int64 __fastcall DC::bOldPenNominal(DC *this, struct EXFORMOBJ *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  int *v6; // rdi
  int v7; // r8d
  int v8; // eax
  int *v10; // rdi
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  bool v15; // sf
  int v16; // r9d
  int v17; // r10d
  int v18; // r9d
  bool v19; // sf
  _DWORD v20[2]; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+2Ch] [rbp-14h]
  int v23; // [rsp+34h] [rbp-Ch]
  char v24; // [rsp+38h] [rbp-8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x20) == 0 )
  {
    v20[0] = a3;
    v6 = v20;
    v20[1] = 0;
    if ( (*(_DWORD *)(v4 + 32) & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 2) != 0 )
    {
      while ( v6 < &v21 )
      {
        if ( (unsigned int)(*v6 + 134217726) > 0xFFFFFFC )
          goto LABEL_46;
        v7 = v6[1];
        if ( (unsigned int)(v7 + 134217726) > 0xFFFFFFC )
          goto LABEL_46;
        *v6 *= 16;
        v6[1] = 16 * v7;
        v6 += 2;
      }
      goto LABEL_10;
    }
    if ( (unsigned int)bCvtVts(*(_QWORD *)a2, v20, v20, 1LL) )
    {
LABEL_10:
      v8 = -v20[0];
      if ( v20[0] > 0 )
        v8 = v20[0];
      if ( v8 < 24 )
        return 1;
      return v3;
    }
LABEL_46:
    EngSetLastError(0x216u);
    return v3;
  }
  v21 = a3;
  v10 = &v21;
  v22 = 0LL;
  v23 = a3;
  if ( (*(_DWORD *)(v4 + 32) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 2) != 0 )
  {
    while ( v10 < (int *)&v24 )
    {
      if ( (unsigned int)(*v10 + 134217726) > 0xFFFFFFC )
        goto LABEL_46;
      v11 = v10[1];
      if ( (unsigned int)(v11 + 134217726) > 0xFFFFFFC )
        goto LABEL_46;
      *v10 *= 16;
      v10[1] = 16 * v11;
      v10 += 2;
    }
  }
  else if ( !(unsigned int)bCvtVts(*(_QWORD *)a2, &v21, &v21, 2LL) )
  {
    goto LABEL_46;
  }
  v12 = v21;
  if ( v21 < 0 )
    v12 = -v21;
  v13 = v22;
  if ( (int)v22 < 0 )
    v13 = -(int)v22;
  if ( v12 <= v13 )
  {
    v14 = v22;
    v15 = (int)v22 < 0;
  }
  else
  {
    v14 = v21;
    v15 = v21 < 0;
  }
  if ( v15 )
    v14 = -v14;
  if ( v14 < 24 )
  {
    v16 = HIDWORD(v22);
    if ( v22 < 0 )
      v16 = -HIDWORD(v22);
    v17 = v23;
    if ( v23 < 0 )
      v17 = -v23;
    if ( v16 > v17 )
    {
      v18 = HIDWORD(v22);
      v19 = v22 < 0;
    }
    else
    {
      v18 = v23;
      v19 = v23 < 0;
    }
    if ( v19 )
      v18 = -v18;
    if ( v18 < 24 && v21 * v21 + (int)v22 * (int)v22 < 576 && HIDWORD(v22) * HIDWORD(v22) + v23 * v23 < 576 )
      return 1;
  }
  return v3;
}
