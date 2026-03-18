/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800A82C4
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z @ 0x180226FE0 (-Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z.c)
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800AA154 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800AA494 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800AA71C (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x1800AB13C (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180111BD8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180111D80 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v4; // rax
  int v5; // esi
  CInteractionContextWrapper *v7; // rax
  struct IInteractionContextWrapper *v8; // rdi
  unsigned __int64 v9; // rcx
  CInteractionContextWrapper *v10; // rax
  unsigned __int64 v11; // rcx
  CInteractionContextWrapper *v12; // rax
  struct IInteractionContextWrapper *v13; // rbx
  CInteractionContextWrapper *v14; // rax
  char *v15; // rbx
  struct IInteractionContextWrapper *v16; // r15
  struct IInteractionContextWrapper *v17; // rcx
  __int64 v18; // r8
  CInteractionContextWrapper *v19; // rax
  struct IInteractionContextWrapper *v20; // r13
  CInteractionContextWrapper *v21; // rax
  struct IInteractionContextWrapper *v22; // r14
  unsigned __int64 v23; // rcx
  CInteractionContextWrapper *v24; // rax
  struct IInteractionContextWrapper *v26; // [rsp+38h] [rbp-28h]
  int v27; // [rsp+48h] [rbp-18h] BYREF
  int v28; // [rsp+4Ch] [rbp-14h]
  int v29; // [rsp+50h] [rbp-10h]

  *((_QWORD *)this + 172) = a2;
  v4 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v7 = CInteractionContextWrapper::CInteractionContextWrapper(v4);
  if ( (v8 = v7) == 0LL )
    return (unsigned int)-2147024882;
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v7)(v7);
  v10 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v9);
  if ( v10 )
  {
    v12 = CInteractionContextWrapper::CInteractionContextWrapper(v10);
    v13 = v12;
    if ( v12 )
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v12)(v12);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v11);
  if ( v14 )
  {
    v21 = CInteractionContextWrapper::CInteractionContextWrapper(v14);
    v22 = v21;
    if ( v21 )
    {
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v21)(v21);
      v26 = v13;
      v24 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v23);
      if ( !v24 )
      {
        v16 = v22;
        goto LABEL_29;
      }
      v19 = CInteractionContextWrapper::CInteractionContextWrapper(v24);
      v20 = v19;
      v16 = v22;
      if ( !v19 )
      {
LABEL_29:
        v5 = -2147024882;
        goto LABEL_14;
      }
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v19)(v19);
      v5 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 24), v8, v13, v22, v20, 1);
      v17 = v20;
      if ( v5 >= 0 )
      {
        v28 = -1;
        v15 = (char *)this + 112;
        v27 = 1;
        v29 = -805306369;
        *((_DWORD *)this + 34) = 0;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 12LL);
        v5 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 112, &v27, 1LL);
        if ( v5 < 0 )
          goto LABEL_11;
        v28 = -1;
        *((_BYTE *)this + 172) |= 1u;
        v15 = (char *)this + 272;
        *((_DWORD *)this + 74) = 0;
        v27 = 1;
        v29 = -805306369;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 12LL);
        v5 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 272, &v27, 1LL);
        if ( v5 < 0 )
          goto LABEL_11;
        v28 = -1;
        v29 = -805306369;
        *((_BYTE *)this + 332) |= 1u;
        v15 = (char *)this + 592;
        *((_DWORD *)this + 166) = -805306369;
        *((_DWORD *)this + 154) = 0;
        v27 = 1;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 592, 12LL);
        v5 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
               (char *)this + 592,
               &v27,
               1LL);
        if ( v5 < 0 )
          goto LABEL_11;
        v28 = -1;
        *((_BYTE *)this + 652) |= 1u;
        v15 = (char *)this + 432;
        *((_DWORD *)this + 114) = 0;
        v27 = 1;
        v29 = -805306369;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 432, 12LL);
        v5 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 432, &v27, 1LL);
        if ( v5 >= 0 )
        {
          *((_BYTE *)this + 492) |= 1u;
          v17 = v20;
          LOBYTE(v18) = a3;
          v16 = v22;
          v13 = v26;
          if ( !a3 )
            goto LABEL_13;
          (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
            this,
            0LL,
            v18,
            1LL);
        }
        else
        {
LABEL_11:
          *((_DWORD *)v15 + 6) = 0;
          DynArrayImpl<0>::ShrinkToSize(v15, 12LL);
          v13 = v26;
          v16 = v22;
        }
        v17 = v20;
      }
LABEL_13:
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_14:
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v16 + 8LL))(v16);
      goto LABEL_15;
    }
  }
  v5 = -2147024882;
LABEL_15:
  if ( v13 )
    (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v13 + 8LL))(v13);
  (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v8 + 8LL))(v8);
  return (unsigned int)v5;
}
