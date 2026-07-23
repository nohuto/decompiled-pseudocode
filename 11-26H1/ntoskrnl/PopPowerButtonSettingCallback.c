/*
 * XREFs of PopPowerButtonSettingCallback @ 0x1407CFB60
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerButtonSettingCallback(__int64 *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  char *v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int128 v27; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-D8h]
  __int128 v30; // [rsp+50h] [rbp-C8h]
  __int128 v31; // [rsp+60h] [rbp-B8h]
  __int128 v32; // [rsp+70h] [rbp-A8h]
  __int128 v33; // [rsp+80h] [rbp-98h]
  __int128 v34; // [rsp+90h] [rbp-88h]
  _OWORD v35[6]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+100h] [rbp-18h]

  PopAcquirePolicyLock(a1, a2);
  v8 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 16);
  v27 = *(_OWORD *)PpmIdlePolicyLock.WriteOperationCount;
  v9 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 32);
  v28 = v8;
  v10 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 48);
  v29 = v9;
  v11 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 64);
  v30 = v10;
  v12 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 80);
  v31 = v11;
  v13 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 96);
  v32 = v12;
  v33 = v13;
  v14 = v35;
  v34 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 112);
  v15 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 144);
  v35[0] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 128);
  v16 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 160);
  v35[1] = v15;
  v17 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 176);
  v35[2] = v16;
  v18 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 192);
  v35[3] = v17;
  v19 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 208);
  v20 = *(_QWORD *)(PpmIdlePolicyLock.WriteOperationCount + 224);
  v35[4] = v18;
  v35[5] = v19;
  v36 = v20;
  v21 = *a1;
  v22 = *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 == *a1 )
    v22 = *(_QWORD *)GUID_POWERBUTTON_ACTION.Data4 - a1[1];
  if ( v22 )
  {
    v22 = *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 - v21;
    if ( *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 == v21 )
      v22 = *(_QWORD *)GUID_SLEEPBUTTON_ACTION.Data4 - a1[1];
    if ( v22 )
    {
      v22 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - v21;
      if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == v21 )
        v22 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - a1[1];
      if ( v22 )
      {
        v22 = *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 - v21;
        if ( *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 == v21 )
          v22 = *(_QWORD *)GUID_LIDOPEN_POWERSTATE.Data4 - a1[1];
        if ( !v22 && a3 == 4 && a2 )
        {
          v22 = *a2;
          v25 = DWORD2(v29);
          if ( (unsigned int)v22 <= 7 )
            v25 = *a2;
          DWORD2(v29) = v25;
        }
        goto LABEL_28;
      }
      v23 = (char *)&v28 + 12;
    }
    else
    {
      v23 = (char *)&v28;
    }
  }
  else
  {
    v23 = (char *)&v27 + 4;
  }
  if ( a3 == 4 )
  {
    if ( a2 )
    {
      v22 = *a2;
      if ( !(_DWORD)v22 || (unsigned int)v22 <= 8 && (v6 = 332LL, _bittest((const int *)&v6, v22)) )
      {
        *(_QWORD *)(v23 + 4) = 0LL;
        *(_DWORD *)v23 = v22;
LABEL_28:
        LOBYTE(v22) = 1;
        v24 = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64))PopApplyPolicy)(v22, 0LL, &v27, 232LL);
        goto LABEL_29;
      }
    }
  }
  v24 = -1073741811;
LABEL_29:
  PopReleasePolicyLock(
    v22,
    v6,
    v7,
    v14,
    v27,
    *((_QWORD *)&v27 + 1),
    v28,
    *((_QWORD *)&v28 + 1),
    v29,
    *((_QWORD *)&v29 + 1));
  return v24;
}
