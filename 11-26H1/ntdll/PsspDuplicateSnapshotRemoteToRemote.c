/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800B4CF0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x18010F5D0 (PssNtFreeRemoteSnapshot.c)
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x180159ACC (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x180159B14 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F680 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v7; // r12
  unsigned int v9; // r13d
  int v10; // ebx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r14
  unsigned __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v41; // [rsp+70h] [rbp-90h]
  _BYTE v42[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+84h] [rbp-7Ch]
  __int16 v44; // [rsp+198h] [rbp+98h]
  __int64 v45; // [rsp+1A0h] [rbp+A0h]
  _QWORD v46[3]; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v47; // [rsp+400h] [rbp+300h] BYREF
  __int64 v48; // [rsp+408h] [rbp+308h]
  _QWORD v49[3]; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v50[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v51[4]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v52[15]; // [rsp+470h] [rbp+370h] BYREF
  _QWORD v53[3]; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v54[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v55; // [rsp+878h] [rbp+778h]
  __int64 v56; // [rsp+880h] [rbp+780h]
  __int64 v57; // [rsp+888h] [rbp+788h]
  __int64 v58; // [rsp+898h] [rbp+798h]
  __int64 v59; // [rsp+8B0h] [rbp+7B0h]
  __int64 v60; // [rsp+8D0h] [rbp+7D0h]
  __int64 v61; // [rsp+8F0h] [rbp+7F0h]
  __int64 v62; // [rsp+968h] [rbp+868h]

  v39 = a2;
  v41 = a4;
  v7 = a2;
  v36 = 0LL;
  memset_thunk_772440563353939046(v54, 0, 0x478uLL);
  v38 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v9 = 0;
  v37 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v42, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(a1, v7, v54, 1144LL, &v38);
  if ( v10 < 0 )
    goto LABEL_48;
  if ( v38 == 1144 )
  {
    if ( LODWORD(v54[0]) == 1146311504 )
    {
      v10 = PssValidateSnapshotDescriptor(v54);
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)v55 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v9 = v11 + 1144;
          if ( (unsigned int)v11 < 0xFFFFFB88 )
          {
            v12 = 8LL;
            v13 = v42;
            v14 = v54;
            do
            {
              v15 = *((_OWORD *)v14 + 1);
              *(_OWORD *)v13 = *(_OWORD *)v14;
              v16 = *((_OWORD *)v14 + 2);
              *((_OWORD *)v13 + 1) = v15;
              v17 = *((_OWORD *)v14 + 3);
              *((_OWORD *)v13 + 2) = v16;
              v18 = *((_OWORD *)v14 + 4);
              *((_OWORD *)v13 + 3) = v17;
              v19 = *((_OWORD *)v14 + 5);
              *((_OWORD *)v13 + 4) = v18;
              v20 = *((_OWORD *)v14 + 6);
              *((_OWORD *)v13 + 5) = v19;
              v21 = *((_OWORD *)v14 + 7);
              v14 += 16;
              *((_OWORD *)v13 + 6) = v20;
              v13 += 128;
              *((_OWORD *)v13 - 1) = v21;
              --v12;
            }
            while ( v12 );
            v22 = v54[109];
            v23 = *((_OWORD *)v14 + 1);
            *(_OWORD *)v13 = *(_OWORD *)v14;
            v24 = *((_OWORD *)v14 + 2);
            *((_OWORD *)v13 + 1) = v23;
            v25 = *((_OWORD *)v14 + 3);
            *((_OWORD *)v13 + 2) = v24;
            v26 = *((_OWORD *)v14 + 4);
            *((_OWORD *)v13 + 3) = v25;
            v27 = *((_OWORD *)v14 + 5);
            *((_OWORD *)v13 + 4) = v26;
            v28 = *((_OWORD *)v14 + 6);
            v29 = v14[14];
            *((_OWORD *)v13 + 5) = v27;
            *((_OWORD *)v13 + 6) = v28;
            *((_QWORD *)v13 + 14) = v29;
            v46[0] = 0LL;
            v47 = 0LL;
            v49[0] = 0LL;
            v50[0] = 0LL;
            v51[0] = 0LL;
            v52[0] = 0LL;
            v53[0] = 0LL;
            if ( v22 )
            {
              v10 = ZwDuplicateObject(a1, v22, a3, v46, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v56 )
            {
              v10 = ZwDuplicateObject(a1, v56, a3, &v47, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v58 )
            {
              v10 = ZwDuplicateObject(a1, v58, a3, v49, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v59 )
            {
              v10 = ZwDuplicateObject(a1, v59, a3, v50, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v60 )
            {
              v10 = ZwDuplicateObject(a1, v60, a3, v51, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v61 )
            {
              v10 = ZwDuplicateObject(a1, v61, a3, v52, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v62 )
            {
              v10 = ZwDuplicateObject(a1, v62, a3, v53, 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            v35 = v9;
            v10 = ZwAllocateVirtualMemory(a3, &v36, 0LL, &v35, 4096, 4);
            if ( v10 < 0 )
              goto LABEL_48;
            v43 = v43 & 0xFFFFFFF8 | 1;
            if ( v48 )
              v48 = v36 + 1144;
            if ( v44 )
              v45 = v36 + 296;
            if ( (unsigned int)Feature_2609059128__private_IsEnabledDeviceUsageNoInline() )
            {
              v31 = 0LL;
              v30 = NtWriteVirtualMemory(a3, v36, v42, 1144LL, 0LL);
            }
            else
            {
              v30 = NtWriteVirtualMemory(a3, v36, v42, v9, 0LL);
              v31 = 0LL;
            }
            v10 = v30;
            if ( v30 < 0 )
              goto LABEL_48;
            if ( v57 )
            {
              v35 = 1LL;
              v10 = ZwAllocateVirtualMemory(-1LL, &v37, 0LL, &v35, 4096, 4);
              if ( v10 < 0 )
                goto LABEL_48;
              v32 = (unsigned int)v11;
              if ( (_DWORD)v11 )
              {
                while ( 1 )
                {
                  v33 = v32 - v31;
                  if ( v35 <= v32 - v31 )
                    v33 = v35;
                  v10 = ZwReadVirtualMemory(a1, v31 + v57, v37, v33, &v38);
                  if ( v10 < 0 )
                    break;
                  if ( v38 != v33 )
                    goto LABEL_46;
                  v10 = NtWriteVirtualMemory(a3, v31 + v36 + 1144, v37, v38, &v40);
                  if ( v10 < 0 )
                    break;
                  if ( v40 != v38 )
                  {
LABEL_46:
                    v10 = -2147483635;
                    break;
                  }
                  v31 += v40;
                  if ( v31 >= v32 )
                    goto LABEL_44;
                }
                v7 = v39;
                goto LABEL_48;
              }
LABEL_44:
              ZwFreeVirtualMemory(-1LL, &v37, &v35, 0x8000LL);
              v7 = v39;
              v37 = 0LL;
            }
            v10 = 0;
            *v41 = v36;
            goto LABEL_66;
          }
          v9 = -1;
        }
        v10 = -1073741675;
      }
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_48:
  if ( v37 )
  {
    v35 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v37, &v35, 0x8000LL);
  }
  if ( v36 )
  {
    v35 = v9;
    ZwFreeVirtualMemory(-1LL, &v36, &v35, 0x8000LL);
  }
  if ( v52[0] )
    ZwDuplicateObject(a3, v52[0], 0LL, 0LL, 0, 0, 1);
  if ( v51[0] )
    ZwDuplicateObject(a3, v51[0], 0LL, 0LL, 0, 0, 1);
  if ( v49[0] )
    ZwDuplicateObject(a3, v49[0], 0LL, 0LL, 0, 0, 1);
  if ( v50[0] )
    ZwDuplicateObject(a3, v50[0], 0LL, 0LL, 0, 0, 1);
  if ( v47 )
    ZwDuplicateObject(a3, v47, 0LL, 0LL, 0, 0, 1);
  if ( v46[0] )
    ZwDuplicateObject(a3, v46[0], 0LL, 0LL, 0, 0, 1);
  if ( v53[0] )
    ZwDuplicateObject(a3, v53[0], 0LL, 0LL, 0, 0, 1);
LABEL_66:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(a1, v7);
  return (unsigned int)v10;
}
