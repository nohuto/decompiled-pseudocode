/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113960
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113030 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800A785C (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1800A7C6C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??2CManipulationContext@@SAPEAX_K@Z @ 0x180110308 (--2CManipulationContext@@SAPEAX_K@Z.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801156C0 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180115FDC (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x18015496C (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18020A9D0 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z @ 0x180226FE0 (-Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  const struct DEVICE_INFO *v4; // rax
  unsigned int v5; // r12d
  const struct DEVICE_INFO *v6; // r15
  __int64 v7; // r9
  bool v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  __int128 v15; // xmm0
  unsigned __int64 *v16; // rdx
  CInteraction *v17; // rbx
  __int64 v18; // rdx
  CManipulationContext **v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  char v22; // r8
  char v23; // r10
  CManipulationContext *v24; // rcx
  unsigned int v25; // eax
  char v26; // r10
  int v27; // ecx
  int v28; // ecx
  CManipulationContext *v29; // rax
  CManipulationContext *v30; // rax
  __int64 v31; // rdx
  bool IsMousewheelFrame; // [rsp+118h] [rbp+10h]
  struct CInteraction *v33; // [rsp+120h] [rbp+18h] BYREF
  __int64 v34; // [rsp+128h] [rbp+20h] BYREF

  v4 = CPointerDeviceCache::Update(a2);
  v5 = *((_DWORD *)a2 + 92);
  v6 = v4;
  v7 = 256LL;
  if ( v5 != 5 )
    v7 = 248LL;
  *(_QWORD *)((char *)this + v7) = *((_QWORD *)a2 + 56);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v8 = IsMousewheelFrame;
  v9 = 0;
  if ( *((_DWORD *)a2 + 4) )
  {
    while ( 1 )
    {
      v10 = 248LL * v9;
      if ( v5 == 5 )
      {
        if ( *((_BYTE *)v6 + 48) )
          break;
      }
LABEL_10:
      v12 = *((_QWORD *)this + 35);
      if ( v12 )
        v13 = *(_QWORD *)((char *)a2 + v10 + 448) / v12 * *((_QWORD *)this + 36)
            + *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v10 + 448) % v12) / v12;
      else
        v13 = 1000LL * *(unsigned int *)((char *)a2 + v10 + 432);
      *((_QWORD *)this + 37) = v13;
      if ( v5 == 3 )
        *((_QWORD *)this + 38) = v13;
      v14 = *(_DWORD *)((char *)a2 + v10 + 380);
      if ( (v14 & 0x20000) != 0 && (*(_DWORD *)((_BYTE *)a2 + v10 + 380) & 4) == 0 || (v14 & 0x810000) != 0 || v8 )
      {
        v15 = *((_OWORD *)a2 + 2);
        v33 = 0LL;
        v34 = v15;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
        v16 = (unsigned __int64 *)&v34;
        if ( (*(_DWORD *)((_BYTE *)a2 + v10 + 380) & 0x800000) != 0 )
          v16 = 0LL;
        CInteraction::ResolveInteractionHandle(*(_DWORD *)((char *)a2 + v10 + 560), v16, &v33);
        v17 = v33;
        if ( v33 )
        {
          v18 = *(unsigned int *)((char *)a2 + v10 + 380);
          if ( (v18 & 0x10000) != 0 || v8 )
          {
            CManipulationManager::s_needsStopAndEndInertia = 0;
            v21 = ConvertToInputType(v5, v18);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v17,
              *(_DWORD *)((char *)a2 + v10 + 372),
              v21,
              v23,
              v22,
              v22);
            if ( CManipulationManager::s_needsStopAndEndInertia )
            {
              v31 = *(unsigned int *)((char *)a2 + v10 + 372);
              CManipulationManager::s_needsStopAndEndInertia = 0;
              StopAndEndInertia(0LL, v31);
            }
            if ( (*((_BYTE *)a2 + v10 + 380) & 1) == 0 )
            {
              v24 = (CManipulationContext *)*((_QWORD *)this + 30);
              if ( v24 )
                CManipulationContext::OnContactHoverDepart(v24, *(_DWORD *)((char *)a2 + v10 + 372));
            }
          }
          else if ( (v18 & 0x800000) != 0 )
          {
            v25 = ConvertToInputType(v5, v18);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v17,
              *(_DWORD *)((char *)a2 + v10 + 372),
              v25,
              v26,
              v26,
              v26);
          }
          else
          {
            v19 = (CManipulationContext **)((char *)this + 240);
            if ( *((_QWORD *)this + 30) )
              goto LABEL_26;
            v29 = (CManipulationContext *)CManipulationContext::operator new();
            v30 = v29 ? CManipulationContext::CManipulationContext(v29, *((struct CComposition **)this + 2)) : 0LL;
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (_QWORD *)this + 30,
              (void (__fastcall ***)(_QWORD))v30);
            if ( *v19 )
              CManipulationContext::Initialize(*v19, 0, c_defaultDesktopLuid);
            if ( *v19 )
            {
LABEL_26:
              v20 = ConvertToInputType(
                      *(unsigned int *)((char *)a2 + v10 + 368),
                      *(unsigned int *)((char *)a2 + v10 + 380));
              CManipulationContext::OnHoverContact((__int64)*v19, v17, *(_DWORD *)((char *)a2 + v10 + 372), v20);
            }
            v8 = IsMousewheelFrame;
          }
          (*(void (__fastcall **)(CInteraction *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      if ( ++v9 >= *((_DWORD *)a2 + 4) )
        return;
    }
    v11 = *(_QWORD *)((char *)a2 + v10 + 424);
    if ( *((_DWORD *)v6 + 8) != 2 )
    {
      if ( *((_DWORD *)v6 + 8) == 3 )
      {
        *(_DWORD *)((char *)a2 + v10 + 424) = *((_DWORD *)v6 + 6) - v11;
        v27 = *((_DWORD *)v6 + 7);
        v11 >>= 32;
      }
      else
      {
        if ( *((_DWORD *)v6 + 8) != 4 )
        {
LABEL_9:
          *(_QWORD *)((char *)a2 + v10 + 408) = *(_QWORD *)((char *)a2 + v10 + 424);
          goto LABEL_10;
        }
        *(_DWORD *)((char *)a2 + v10 + 424) = HIDWORD(v11);
        v27 = *((_DWORD *)v6 + 6);
      }
      *(_DWORD *)((char *)a2 + v10 + 428) = v27 - v11;
      goto LABEL_9;
    }
    v28 = *((_DWORD *)v6 + 7) - HIDWORD(v11);
    *(_DWORD *)((char *)a2 + v10 + 428) = v11;
    *(_DWORD *)((char *)a2 + v10 + 424) = v28;
    goto LABEL_9;
  }
}
