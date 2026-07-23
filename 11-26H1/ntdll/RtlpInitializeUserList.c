/*
 * XREFs of RtlpInitializeUserList @ 0x180056710
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x180059064 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1, _QWORD *UserPrefLanguages)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  int v5; // ebp
  __int64 result; // rax
  _WORD *LanguageList; // r14
  bool v8; // sf
  struct _TEB *v9; // r8
  int WowTebOffset; // eax
  struct _TEB *v11; // rdx
  __int64 v12; // rax
  struct _TEB *v13; // rcx
  __int64 v14; // rax
  unsigned int MuiImpersonation; // eax
  PVOID *Heap_0; // rax
  PVOID *v17; // rdi
  _QWORD *v18; // rdi
  void *v19; // rcx
  struct _TEB *v20; // rdx
  int v21; // eax
  struct _TEB *v22; // r8
  __int64 v23; // rax
  struct _TEB *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  struct _TEB *v27; // rcx
  int v28; // eax
  struct _TEB *v29; // rdx
  __int64 v30; // rax
  bool v31; // zf
  struct _TEB *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  char v36; // [rsp+68h] [rbp+10h] BYREF
  _WORD *v37; // [rsp+70h] [rbp+18h] BYREF
  __int64 v38; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v37 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    if ( *UserPrefLanguages )
      return 0LL;
  }
  if ( !a1 )
    return 3221225473LL;
  v5 = 1;
  v36 = 0;
  result = RtlpMuiRegLoadPreferredUILanguages(a1, (_DWORD)UserPrefLanguages, 1, 3, (__int64)&v36, (__int64)&v37);
  LanguageList = v37;
  if ( v37 )
  {
    v8 = (int)result < 0;
    if ( (_DWORD)result )
    {
      if ( v36 && (_DWORD)result != -1073741801 )
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
    result = RtlpLoadLanguageConfigList(8u);
    if ( (int)result < 0 )
      return result;
    v4 = v38;
  }
  *((_DWORD *)LanguageList + 10) |= 0x10u;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    v17 = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
    goto LABEL_21;
  }
  Heap_0 = (PVOID *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  v17 = Heap_0;
  if ( Heap_0 )
  {
    *Heap_0 = 0LL;
    Heap_0[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap_0;
LABEL_21:
    if ( *v17 )
    {
      *((_DWORD *)LanguageList + 10) = *((_DWORD *)*v17 + 10);
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
      v35 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
      v18 = v35;
      if ( !v35 )
      {
        v2 = -1073741801;
        goto LABEL_29;
      }
      *v35 = 0LL;
      v35[1] = 0LL;
      NtCurrentTeb()->UserPrefLanguages = v35;
    }
    v19 = (void *)v18[1];
    if ( v19 )
      RtlpMuiRegFreeStringPool(v19);
    v18[1] = v4;
    goto LABEL_29;
  }
  v2 = -1073741801;
LABEL_29:
  v20 = NtCurrentTeb();
  v21 = v20->WowTebOffset;
  if ( v21 < 0 )
    LODWORD(v20) = v21 + (_DWORD)v20;
  v22 = NtCurrentTeb();
  v23 = v22->WowTebOffset;
  if ( (int)v23 < 0 )
    v22 = (struct _TEB *)((char *)v22 + v23);
  v24 = NtCurrentTeb();
  v25 = v24->WowTebOffset;
  if ( (_DWORD)v20 == LODWORD(v22->NtTib.SubSystemTib) )
  {
    if ( (int)v25 < 0 )
      v24 = (struct _TEB *)((char *)v24 + v25);
    v26 = HIDWORD(v24->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v25 < 0 )
      v24 = (struct _TEB *)((char *)v24 + v25);
    v26 = v24->MuiImpersonation;
  }
  if ( !v26 )
  {
    v27 = NtCurrentTeb();
    v28 = v27->WowTebOffset;
    if ( v28 < 0 )
      LODWORD(v27) = v28 + (_DWORD)v27;
    v29 = NtCurrentTeb();
    v30 = v29->WowTebOffset;
    if ( (int)v30 < 0 )
      v29 = (struct _TEB *)((char *)v29 + v30);
    v31 = (_DWORD)v27 == LODWORD(v29->NtTib.SubSystemTib);
    v32 = NtCurrentTeb();
    if ( v31 )
    {
      if ( MEMORY[0x7FFE03A4] )
        v5 = MEMORY[0x7FFE03A4];
      v34 = v32->WowTebOffset;
      if ( (int)v34 < 0 )
        v32 = (struct _TEB *)((char *)v32 + v34);
      HIDWORD(v32->glDispatchTable[186]) = v5;
    }
    else
    {
      if ( MEMORY[0x7FFE03A4] )
        v5 = MEMORY[0x7FFE03A4];
      v33 = v32->WowTebOffset;
      if ( (int)v33 < 0 )
        v32 = (struct _TEB *)((char *)v32 + v33);
      v32->MuiImpersonation = v5;
    }
  }
  return v2;
}
