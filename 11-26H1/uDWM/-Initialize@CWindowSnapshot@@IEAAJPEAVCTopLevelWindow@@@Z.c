/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180014AB0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x1800235C0 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800295A8 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18007FC1C (--0CWindowData@@QEAA@XZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     ??2CWindowData@@SAPEAX_K@Z @ 0x180085D04 (--2CWindowData@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  unsigned int v4; // esi
  struct CWindowData *WindowData; // rdi
  unsigned __int8 v6; // al
  char v7; // bl
  unsigned __int64 v8; // rcx
  CWindowData *v9; // rax
  CWindowData *v10; // rcx
  __int64 v11; // rax
  CBaseObject *v12; // rcx
  CBaseObject **v13; // r14
  int v14; // eax

  v4 = 0;
  WindowData = CTopLevelWindow::GetWindowData(a2);
  v6 = *((_BYTE *)WindowData + 736);
  v7 = v6 >> 1;
  if ( (v6 & 4) == 0 )
  {
    *((_BYTE *)WindowData + 736) = v6 & 0xFD;
    CWindowData::OnWindowStyleUpdated(WindowData);
  }
  CTopLevelWindow::NotifyMouseLeave(*((CTopLevelWindow **)WindowData + 55));
  CContainerVisual::RenderRecursive(a2);
  v9 = (CWindowData *)CWindowData::operator new(v8);
  if ( v9 )
    v10 = CWindowData::CWindowData(v9);
  else
    v10 = 0LL;
  *((_QWORD *)this + 4) = v10;
  if ( v10 )
  {
    *((_QWORD *)v10 + 5) = *((_QWORD *)WindowData + 5);
    *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *((_QWORD *)WindowData + 4);
    *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *((_OWORD *)WindowData + 3);
    *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *((_OWORD *)WindowData + 4);
    *(_OWORD *)(*((_QWORD *)this + 4) + 96LL) = *((_OWORD *)WindowData + 6);
    *(_OWORD *)(*((_QWORD *)this + 4) + 220LL) = *(_OWORD *)((char *)WindowData + 220);
    *(_OWORD *)(*((_QWORD *)this + 4) + 268LL) = *(_OWORD *)((char *)WindowData + 268);
    *(_OWORD *)(*((_QWORD *)this + 4) + 284LL) = *(_OWORD *)((char *)WindowData + 284);
    *(_QWORD *)(*((_QWORD *)this + 4) + 136LL) = *((_QWORD *)WindowData + 17);
    *(_DWORD *)(*((_QWORD *)this + 4) + 744LL) = *((_DWORD *)WindowData + 186);
    *(_BYTE *)(*((_QWORD *)this + 4) + 740LL) ^= (*((_BYTE *)WindowData + 740) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 740LL)) & 8;
    *(_BYTE *)(*((_QWORD *)this + 4) + 408LL) = *((_BYTE *)WindowData + 408);
    *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = *((_DWORD *)WindowData + 32);
    *(_OWORD *)(*((_QWORD *)this + 4) + 748LL) = *(_OWORD *)((char *)WindowData + 748);
    *(_OWORD *)(*((_QWORD *)this + 4) + 764LL) = *(_OWORD *)((char *)WindowData + 764);
    *(_OWORD *)(*((_QWORD *)this + 4) + 780LL) = *(_OWORD *)((char *)WindowData + 780);
    *(_OWORD *)(*((_QWORD *)this + 4) + 796LL) = *(_OWORD *)((char *)WindowData + 796);
    *(_DWORD *)(*((_QWORD *)this + 4) + 116LL) = *((_DWORD *)WindowData + 29);
    *(_DWORD *)(*((_QWORD *)this + 4) + 120LL) = *((_DWORD *)WindowData + 30);
    *(_DWORD *)(*((_QWORD *)this + 4) + 124LL) = *((_DWORD *)WindowData + 31);
    *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *((_DWORD *)WindowData + 28);
    *(_OWORD *)(*((_QWORD *)this + 4) + 304LL) = *((_OWORD *)WindowData + 19);
    *(_QWORD *)(*((_QWORD *)this + 4) + 320LL) = *((_QWORD *)WindowData + 40);
    *(_DWORD *)(*((_QWORD *)this + 4) + 328LL) = *((_DWORD *)WindowData + 82);
    v11 = *((_QWORD *)this + 4);
    *(_OWORD *)(v11 + 336) = *((_OWORD *)WindowData + 21);
    *(_OWORD *)(v11 + 352) = *((_OWORD *)WindowData + 22);
    *(_OWORD *)(v11 + 368) = *((_OWORD *)WindowData + 23);
    *(_OWORD *)(v11 + 384) = *((_OWORD *)WindowData + 24);
    *(_QWORD *)(v11 + 400) = *((_QWORD *)WindowData + 50);
    *(_BYTE *)(*((_QWORD *)this + 4) + 741LL) ^= (*((_BYTE *)WindowData + 741) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 741LL)) & 1;
    *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) ^= (*((_BYTE *)WindowData + 737) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 737LL)) & 0x20;
    *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *((_OWORD *)WindowData + 5);
    *(_DWORD *)(*((_QWORD *)this + 4) + 184LL) = *((_DWORD *)WindowData + 46);
    *(_DWORD *)(*((_QWORD *)this + 4) + 188LL) = *((_DWORD *)WindowData + 47);
    *(_DWORD *)(*((_QWORD *)this + 4) + 192LL) = *((_DWORD *)WindowData + 48);
    *(_DWORD *)(*((_QWORD *)this + 4) + 196LL) = *((_DWORD *)WindowData + 49);
    *(_QWORD *)(*((_QWORD *)this + 4) + 920LL) = *((_QWORD *)WindowData + 115);
    *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) = *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) & 0xEF | (16
                                                                                                  * (CWindowData::IsSimpleClientArea(WindowData) ^ 1));
    *(_QWORD *)(*((_QWORD *)this + 4) + 424LL) = *((_QWORD *)WindowData + 53);
    v12 = (CBaseObject *)*((_QWORD *)WindowData + 53);
    if ( v12 )
      CBaseObject::AddRef(v12);
    if ( (*((_BYTE *)WindowData + 740) & 8) == 0 )
    {
      v13 = (CBaseObject **)((char *)this + 24);
      v14 = CTopLevelWindow::CloneForNewWindowData(
              (__int64)a2,
              *((struct CWindowData **)this + 4),
              4u,
              (struct CContainerVisualProxy ***)this + 3);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x8Bu, 0LL);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 440LL) = *v13;
        if ( *v13 )
          CBaseObject::AddRef(*v13);
        CContainerVisual::RenderRecursive(*v13);
      }
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Eu, 0LL);
  }
  *((_BYTE *)WindowData + 736) ^= (*((_BYTE *)WindowData + 736) ^ (2 * v7)) & 2;
  return v4;
}
