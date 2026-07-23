/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x1800C9630
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180075A08 (RtlQueryProcessModuleInformation.c)
 *     LdrQueryProcessModuleInformation @ 0x1800C9600 (LdrQueryProcessModuleInformation.c)
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
 *     ExecuteHotpatchTestRuntimeFunction @ 0x1801377C8 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x1801377F4 (GetHotpatchTestRuntimeFunctionState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        void *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  char v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // esi
  __int64 v8; // r15
  unsigned __int64 i; // rbx
  int v10; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v19; // [rsp+38h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-88h] BYREF
  int v21; // [rsp+48h] [rbp-80h]
  __int64 v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+58h] [rbp-70h] BYREF
  __int64 v24; // [rsp+60h] [rbp-68h]
  unsigned __int64 v25; // [rsp+68h] [rbp-60h]
  int v26; // [rsp+70h] [rbp-58h]
  __int64 v27; // [rsp+78h] [rbp-50h]
  _DWORD *v28; // [rsp+80h] [rbp-48h]
  void *v29; // [rsp+D0h] [rbp+8h]

  v29 = a1;
  v5 = a2;
  v6 = 8;
  v22 = 0LL;
  v23 = 0LL;
  if ( a4 >= 8 )
  {
    *a3 = 0;
    v19 = a3 + 2;
    v7 = 0;
  }
  else
  {
    v7 = -1073741820;
    v19 = 0LL;
  }
  if ( !a1 || (v8 = a2 & 2, (a2 & 2) != 0) )
  {
    v29 = &LdrpLocalProcess;
    v8 = a2 & 2;
  }
  ExecuteHotpatchTestRuntimeFunction();
  if ( !(unsigned int)GetHotpatchTestRuntimeFunctionState() || !a5 )
  {
    for ( i = 0LL; ; ++i )
    {
      v25 = i;
      if ( i >= (unsigned __int64)(v5 & 1) + 1 )
        return v7;
      v20 = 0LL;
      v10 = LdrpQueryProcessModuleInformationLoopDetectorCount;
      v11 = 1;
      if ( a5 )
      {
        *a5 = v6;
        v12 = v8;
      }
      else
      {
        v12 = a2 & 2;
      }
      v24 = v12;
      if ( v12 )
        funcs_1800BF1FA[5 * i]();
      v27 = 40 * i;
      v13 = ((__int64 (__fastcall *)(void *, __int64 *, __int64 *))funcs_1800BF223[5 * i])(v29, &v22, &v23);
      if ( v13 < 0 )
        goto LABEL_19;
      if ( !v22 )
        goto LABEL_28;
      v13 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))((char *)&funcs_1800BF259 + v27))(v29, v22, &v20);
      if ( v13 < 0 )
      {
LABEL_19:
        v7 = v13;
      }
      else
      {
        while ( 1 )
        {
          v14 = v20;
          if ( v20 == v22 )
            break;
          if ( !v10 )
          {
            v7 = -1073741271;
            break;
          }
          v26 = --v10;
          v6 += 296 * v11;
          v11 = 1;
          v21 = 1;
          v15 = a4;
          if ( a4 < v6 )
          {
            v7 = -1073741820;
          }
          else
          {
            v13 = (*(&funcs_1800BF2F5 + 5 * i))((int)v29, (int)v19, v20, v23, a2);
            if ( v13 < 0 )
              goto LABEL_19;
            v16 = v19;
            v11 = *((_QWORD *)v19 + 2) != 0LL;
            v21 = v11;
            v17 = 74LL * v11;
            v19 = (_DWORD *)((char *)v19 + v17 * 4);
            v28 = &v16[v17];
            v14 = v20;
            v15 = a4;
          }
          if ( a3 && v15 >= 0x130 )
            *a3 += v11;
          v13 = ((__int64 (__fastcall *)(void *, __int64, __int64 *))*(&funcs_1800BF259 + 5 * i))(v29, v14, &v20);
          if ( v13 < 0 )
            goto LABEL_19;
        }
      }
LABEL_28:
      if ( v24 )
        funcs_1800BF5AB[5 * i]();
      if ( a5 )
        *a5 = v6;
      v5 = a2;
    }
  }
  *a5 = -269488145;
  return 3221225485LL;
}
