/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800BF120
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180075A08 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18001ED80 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18007DC70 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x1800D4730 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryNextListEntry @ 0x1800DC360 (LdrQueryNextListEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x1800EC660 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800F8610 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     RtlEndStrongEnumerationHashTable @ 0x1800FB340 (RtlEndStrongEnumerationHashTable.c)
 *     LdrQueryNextListEntry32 @ 0x1800FC920 (LdrQueryNextListEntry32.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180110140 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _QWORD *v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  int v10; // esi
  int v11; // edi
  __int64 v12; // rax
  int v13; // eax
  _WORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  int v20; // eax
  _WORD *v21; // r8
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64, _WORD *, __int64, __int64 *); // rax
  unsigned int v25; // [rsp+34h] [rbp-C4h] BYREF
  int v26; // [rsp+38h] [rbp-C0h]
  __int64 v27; // [rsp+40h] [rbp-B8h] BYREF
  int v28; // [rsp+48h] [rbp-B0h]
  __int64 v29; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-98h] BYREF
  __int64 v32; // [rsp+68h] [rbp-90h] BYREF
  __int64 v33; // [rsp+70h] [rbp-88h] BYREF
  __int64 v34; // [rsp+78h] [rbp-80h] BYREF
  __int64 v35; // [rsp+80h] [rbp-78h] BYREF
  __int64 v36; // [rsp+88h] [rbp-70h] BYREF
  __int64 v37; // [rsp+90h] [rbp-68h]
  __int64 v38; // [rsp+98h] [rbp-60h]
  unsigned __int64 v39; // [rsp+A0h] [rbp-58h]
  int v40; // [rsp+A8h] [rbp-50h]
  _WORD *v41; // [rsp+B0h] [rbp-48h]
  __int16 v42; // [rsp+100h] [rbp+8h] BYREF
  __int64 v43; // [rsp+108h] [rbp+10h]
  _WORD *v44; // [rsp+110h] [rbp+18h]
  unsigned int v45; // [rsp+118h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v5 = a1;
  v25 = 0;
  v6 = 2;
  v26 = 2;
  v29 = 0LL;
  v30 = 0LL;
  v42 = 0;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v7 = 0;
  }
  else
  {
    v7 = -1073741820;
    v44 = 0LL;
  }
  if ( a1 )
  {
    v8 = a2 & 2;
    v38 = v8;
    if ( (a2 & 2) == 0 )
      goto LABEL_6;
  }
  else
  {
    v8 = a2 & 2;
  }
  v5 = &LdrpLocalProcess;
  v38 = v8;
LABEL_6:
  v9 = 0LL;
  v39 = 0LL;
  while ( v9 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v27 = 0LL;
    v10 = LdrpQueryProcessModuleInformationLoopDetectorCount;
    v11 = 1;
    if ( a5 )
    {
      *a5 = v6;
      v12 = v8;
      v37 = v8;
    }
    else
    {
      v12 = a2 & 2;
      v37 = v12;
    }
    if ( v12 )
      funcs_1800BF1FA[5 * v9]();
    v13 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *))funcs_1800BF223[5 * v9])(v5, &v29, &v30);
    if ( v13 < 0 )
    {
LABEL_13:
      v7 = v13;
      goto LABEL_50;
    }
    if ( v29 )
    {
      v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_1800BF259 + 5 * v9))(v5, v29, &v27);
      if ( v13 < 0 )
        goto LABEL_13;
      while ( v27 != v29 )
      {
        if ( !v10 )
        {
          v7 = -1073741271;
          break;
        }
        v40 = --v10;
        v6 += 320 * v11;
        v26 = v6;
        v11 = 1;
        v28 = 1;
        if ( v45 < v6 )
        {
          v7 = -1073741820;
        }
        else
        {
          v14 = v44;
          *v44 = 320;
          v13 = (*(&funcs_1800BF2F5 + 5 * v9))((int)v5, (int)(v14 + 4), v27, v30, v43);
          if ( v13 < 0 )
            goto LABEL_13;
          v15 = *((_QWORD *)v14 + 3);
          if ( v15 )
          {
            v31 = 0LL;
            v13 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned int *, __int64, __int64 *))v5[1])(
                    *v5,
                    v15 + 60,
                    &v25,
                    4LL,
                    &v31);
            if ( v13 >= 0 )
            {
              v13 = -2147483635;
              if ( v31 == 4 )
                v13 = 0;
            }
            if ( v13 < 0 )
              goto LABEL_13;
            v16 = v25 + *((_QWORD *)v14 + 3);
            v32 = 0LL;
            v17 = ((__int64 (__fastcall *)(_QWORD, __int64, _WORD *, __int64, __int64 *))v5[1])(
                    *v5,
                    v16 + 8,
                    v44 + 154,
                    4LL,
                    &v32);
            if ( v17 < 0 )
            {
              v7 = v17;
              break;
            }
            if ( v32 != 4 )
              goto LABEL_27;
            v33 = 0LL;
            v19 = ((__int64 (__fastcall *)(_QWORD, __int64, _WORD *, __int64, __int64 *))v5[1])(
                    *v5,
                    v16 + 88,
                    v44 + 152,
                    4LL,
                    &v33);
            if ( v19 < 0 )
            {
              v7 = v19;
              break;
            }
            if ( v33 != 4 )
              goto LABEL_27;
            v34 = 0LL;
            v20 = ((__int64 (__fastcall *)(_QWORD, __int64, __int16 *, __int64, __int64 *))v5[1])(
                    *v5,
                    v16 + 24,
                    &v42,
                    2LL,
                    &v34);
            if ( v20 < 0 )
            {
              v7 = v20;
              break;
            }
            if ( v34 != 2 )
            {
LABEL_27:
              v7 = -2147483635;
              break;
            }
            v21 = v44 + 156;
            v22 = *v5;
            v23 = (__int64 (__fastcall *)(__int64, __int64, _WORD *, __int64, __int64 *))v5[1];
            if ( v42 == 267 )
            {
              v35 = 0LL;
              v13 = v23(v22, v16 + 52, v21, 4LL, &v35);
              if ( v13 < 0 )
                goto LABEL_13;
              v18 = v35 == 4;
            }
            else
            {
              v36 = 0LL;
              v13 = v23(v22, v16 + 48, v21, 8LL, &v36);
              if ( v13 < 0 )
                goto LABEL_13;
              v18 = v36 == 8;
            }
            v13 = -2147483635;
            if ( v18 )
              v13 = 0;
            if ( v13 < 0 )
              goto LABEL_13;
            v44 += 160;
            v41 = v44;
            *v44 = 0;
          }
          else
          {
            v11 = 0;
            v28 = 0;
          }
        }
        v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_1800BF259 + 5 * v9))(v5, v27, &v27);
        if ( v13 < 0 )
          goto LABEL_13;
      }
    }
LABEL_50:
    if ( v37 )
      funcs_1800BF5AB[5 * v9]();
    if ( a5 )
      *a5 = v6;
    v39 = ++v9;
    LOBYTE(a2) = v43;
    v8 = v38;
  }
  return v7;
}
