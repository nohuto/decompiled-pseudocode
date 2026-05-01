/*
 * XREFs of ?PublishServices@CImmersiveShellComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18016F8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveShellComponent::PublishServices(
        CImmersiveShellComponent *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v5; // rdx
  int v6; // edi
  unsigned __int64 v7; // r14
  __int64 i; // rbp
  unsigned __int64 v9; // r8
  _QWORD *v10; // rsi
  void (__fastcall ***v11)(_QWORD, GUID *, unsigned __int64 *); // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(CImmersiveShellComponent *, struct IServiceProvider *))(*(_QWORD *)this + 80LL))(
         this,
         a2);
  if ( v6 >= 0 )
  {
    v7 = 0LL;
    for ( i = 0LL; ; i += 32LL )
    {
      if ( v7 >= *((_QWORD *)this + 4) )
        return (unsigned int)v6;
      v9 = 0LL;
      v15 = 0LL;
      v10 = (_QWORD *)((char *)this + 24);
      v11 = *(void (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))(*((_QWORD *)this + 3) + i + 16);
      if ( !v11 )
        goto LABEL_11;
      (**v11)(v11, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v15);
      v9 = v15;
      if ( !v15 )
        break;
LABEL_6:
      v6 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, unsigned __int64, __int64))a3->lpVtbl->ProfferService)(
             a3,
             i + *v10,
             v9,
             i + *v10 + 24);
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ++v7;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
    v10 = (_QWORD *)((char *)this + 24);
LABEL_11:
    if ( (((unsigned __int64)this + 8) & -(__int64)(this != 0LL)) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL))
                                               + 8LL))(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v9 = v15;
    }
    v14 = v9;
    v9 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    v15 = v9;
    if ( v14 )
    {
      (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14, v5, v9);
      v9 = v15;
    }
    goto LABEL_6;
  }
  return (unsigned int)v6;
}
