/*
 * XREFs of RootHub_ForceU0AndWait @ 0x14002C35C
 * Callers:
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // r13
  __int64 v9; // rax
  int Ulong; // eax
  int v11; // edx
  int v12; // esi
  int v13; // esi
  int v14; // r9d
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  unsigned int v19; // ebx
  char v20; // al
  int v21; // edx
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rbx
  int v27; // esi
  char i; // r13
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // ebx
  int v32; // edx
  int v33; // ecx
  unsigned int *v35; // [rsp+80h] [rbp+8h]
  unsigned int v36; // [rsp+88h] [rbp+10h]
  __int64 v37; // [rsp+90h] [rbp+18h]

  v2 = a2 - 1;
  v4 = 0;
  v5 = *(_QWORD *)(a1[1] + 88LL);
  v6 = a1[5];
  v7 = a1[6];
  v35 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + v6);
  v37 = v5;
  v36 = a2 - 1;
  v8 = v35 + 1;
  v9 = 120LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v9 + v7 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v9 + v7 + 23) )
      return v4;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v2);
    Ulong = XilRegister_ReadUlong(v5, v8);
    v12 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        248,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        Ulong);
    }
    v13 = v12 & 0xFFFEFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 249;
LABEL_24:
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        v14,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v13);
    }
  }
  else
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v15,
        11,
        250,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    v16 = XilRegister_ReadUlong(v5, v8);
    v18 = v16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v17,
        11,
        251,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v16);
    }
    v19 = v18 & 0xFFFF0000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v17,
        11,
        252,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v19);
    }
    XilRegister_WriteUlong(v5, v8, v19);
    v20 = XilRegister_ReadUlong(v5, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v21,
        11,
        253,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v20);
    }
    v8 = v35;
    v22 = XilRegister_ReadUlong(v5, v35);
    v23 = v22;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        254,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v22);
    }
    v24 = a1[1];
    if ( (*(_QWORD *)(v24 + 744) & 0x40) != 0 )
    {
      if ( (v23 & 0x400000) != 0 )
      {
        ++*(_DWORD *)(v24 + 900);
        ++*(_DWORD *)(v24 + 944);
        *(_BYTE *)(v24 + 872) = 1;
      }
      v25 = 239124992;
    }
    else
    {
      v25 = 234930688;
    }
    v13 = v23 & v25 | 0x10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 255;
      goto LABEL_24;
    }
  }
  v26 = v37;
  XilRegister_WriteUlong(v37, v8, v13);
  RootHub_ReleaseReadModifyWriteLock((__int64)a1, v36);
  v27 = 6400;
  for ( i = 0; ; i += 10 )
  {
    v29 = XilRegister_ReadUlong(v26, v35);
    v31 = v29;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        v30,
        11,
        256,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        i,
        v29);
    }
    v32 = -1;
    if ( v31 == -1 )
      return (unsigned int)-1073741823;
    v33 = v31 & 0x1E0;
    if ( (v31 & 0x1E0) == 0 )
      return v4;
    if ( ((v33 - 160) & 0xFFFFFF5F) == 0 && v33 != 288 || (v31 & 0x20203) != 0x203 || v33 == 128 )
      return (unsigned int)-1073741823;
    if ( ((v33 - 288) & 0xFFFFFFBF) == 0 )
      break;
    if ( (v31 & 0x10) != 0 || !v27 )
      return (unsigned int)-1073741823;
    --v27;
    KeStallExecutionProcessor(0xAu);
    v26 = v37;
  }
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v32,
      11,
      257,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      (v31 >> 5) & 0xF);
  }
  return v4;
}
