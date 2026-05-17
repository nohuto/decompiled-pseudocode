/*
 * XREFs of RtlpInitializeUserList @ 0x18000AFE0
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18000D934 (RtlpMuiRegFreeStringPool.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1, _QWORD *UserPrefLanguages)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  int v5; // ebp
  __int64 result; // rax
  __int64 LanguageList; // r14
  bool v8; // sf
  struct _TEB *v9; // r8
  int WowTebOffset; // eax
  struct _TEB *v11; // rdx
  __int64 v12; // rax
  struct _TEB *v13; // rcx
  __int64 v14; // rax
  unsigned int MuiImpersonation; // eax
  __int64 *Heap_0; // rax
  __int64 *v17; // rdi
  _QWORD *v18; // rdi
  struct _TEB *v19; // rdx
  int v20; // eax
  struct _TEB *v21; // r8
  __int64 v22; // rax
  struct _TEB *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  struct _TEB *v26; // rcx
  int v27; // eax
  struct _TEB *v28; // rdx
  __int64 v29; // rax
  bool v30; // zf
  struct _TEB *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  char v35; // [rsp+68h] [rbp+10h] BYREF
  __int64 v36; // [rsp+70h] [rbp+18h] BYREF
  __int64 v37; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v36 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    if ( *UserPrefLanguages )
      return 0LL;
  }
  if ( !a1 )
    return 3221225473LL;
  v5 = 1;
  v35 = 0;
  result = RtlpMuiRegLoadPreferredUILanguages(a1, (_DWORD)UserPrefLanguages, 1, 3, (__int64)&v35, (__int64)&v36);
  LanguageList = v36;
  if ( v36 )
  {
    v8 = (int)result < 0;
    if ( (_DWORD)result )
    {
      if ( v35 && (_DWORD)result != -1073741801 )
        goto LABEL_6;
      v8 = (int)result < 0;
    }
    if ( v8 )
      return result;
  }
  else
  {
    LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a1);
    if ( !LanguageList )
      return 3221225495LL;
  }
LABEL_6:
  v9 = NtCurrentTeb();
  WowTebOffset = v9->WowTebOffset;
  if ( WowTebOffset < 0 )
    LODWORD(v9) = WowTebOffset + (_DWORD)v9;
  v11 = NtCurrentTeb();
  v12 = v11->WowTebOffset;
  if ( (int)v12 < 0 )
    v11 = (struct _TEB *)((char *)v11 + v12);
  v13 = NtCurrentTeb();
  v14 = v13->WowTebOffset;
  if ( (_DWORD)v9 == LODWORD(v11->NtTib.SubSystemTib) )
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = HIDWORD(v13->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = v13->MuiImpersonation;
  }
  if ( !MuiImpersonation )
  {
    result = RtlpLoadLanguageConfigList(8LL, &v37, a1);
    if ( (int)result < 0 )
      return result;
    v4 = v37;
  }
  *(_DWORD *)(LanguageList + 40) |= 0x10u;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    v17 = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
    goto LABEL_21;
  }
  Heap_0 = (__int64 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
  v17 = Heap_0;
  if ( Heap_0 )
  {
    *Heap_0 = 0LL;
    Heap_0[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap_0;
LABEL_21:
    if ( *v17 )
    {
      *(_DWORD *)(LanguageList + 40) = *(_DWORD *)(*v17 + 40);
      RtlpMuiRegFreeLanguageList(*v17);
    }
    *v17 = LanguageList;
    if ( !v4 )
      goto LABEL_29;
    if ( NtCurrentTeb()->UserPrefLanguages )
    {
      v18 = NtCurrentTeb()->UserPrefLanguages;
    }
    else
    {
      v34 = (_QWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
      v18 = v34;
      if ( !v34 )
      {
        v2 = -1073741801;
        goto LABEL_29;
      }
      *v34 = 0LL;
      v34[1] = 0LL;
      NtCurrentTeb()->UserPrefLanguages = v34;
    }
    if ( v18[1] )
      RtlpMuiRegFreeStringPool();
    v18[1] = v4;
    goto LABEL_29;
  }
  v2 = -1073741801;
LABEL_29:
  v19 = NtCurrentTeb();
  v20 = v19->WowTebOffset;
  if ( v20 < 0 )
    LODWORD(v19) = v20 + (_DWORD)v19;
  v21 = NtCurrentTeb();
  v22 = v21->WowTebOffset;
  if ( (int)v22 < 0 )
    v21 = (struct _TEB *)((char *)v21 + v22);
  v23 = NtCurrentTeb();
  v24 = v23->WowTebOffset;
  if ( (_DWORD)v19 == LODWORD(v21->NtTib.SubSystemTib) )
  {
    if ( (int)v24 < 0 )
      v23 = (struct _TEB *)((char *)v23 + v24);
    v25 = HIDWORD(v23->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v24 < 0 )
      v23 = (struct _TEB *)((char *)v23 + v24);
    v25 = v23->MuiImpersonation;
  }
  if ( !v25 )
  {
    v26 = NtCurrentTeb();
    v27 = v26->WowTebOffset;
    if ( v27 < 0 )
      LODWORD(v26) = v27 + (_DWORD)v26;
    v28 = NtCurrentTeb();
    v29 = v28->WowTebOffset;
    if ( (int)v29 < 0 )
      v28 = (struct _TEB *)((char *)v28 + v29);
    v30 = (_DWORD)v26 == LODWORD(v28->NtTib.SubSystemTib);
    v31 = NtCurrentTeb();
    if ( v30 )
    {
      if ( MEMORY[0x7FFE03A4] )
        v5 = MEMORY[0x7FFE03A4];
      v33 = v31->WowTebOffset;
      if ( (int)v33 < 0 )
        v31 = (struct _TEB *)((char *)v31 + v33);
      HIDWORD(v31->glDispatchTable[186]) = v5;
    }
    else
    {
      if ( MEMORY[0x7FFE03A4] )
        v5 = MEMORY[0x7FFE03A4];
      v32 = v31->WowTebOffset;
      if ( (int)v32 < 0 )
        v31 = (struct _TEB *)((char *)v31 + v32);
      v31->MuiImpersonation = v5;
    }
  }
  return v2;
}
