/*
 * XREFs of ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800A8DDC
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012EFC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 * Callees:
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800A8D30 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 */

void __fastcall CContactManager::LoadPenResources(CContactManager *this)
{
  _DWORD *v2; // rbx
  HMODULE ModuleHandleW; // rax
  CContactManager *v4; // rcx
  HINSTANCE v5; // r14
  char *v6; // rax
  CContactManager *v7; // rcx
  char *v8; // rax
  CContactManager *v9; // rcx
  char *v10; // rax
  CContactManager *v11; // rcx
  _DWORD *v12; // rdi
  char *v13; // rax
  CContactManager *v14; // rcx
  char *v15; // rax
  CContactManager *v16; // rcx
  char *v17; // rax
  int v18; // [rsp+40h] [rbp+20h] BYREF
  INITCOMMONCONTROLSEX picce; // [rsp+48h] [rbp+28h] BYREF

  picce.dwSize = 8;
  picce.dwICC = 8;
  InitCommonControlsEx(&picce);
  v2 = (_DWORD *)((char *)this + 48);
  *((_DWORD *)this + 12) = 0;
  ModuleHandleW = GetModuleHandleW(0LL);
  v5 = ModuleHandleW;
  if ( ModuleHandleW )
  {
    *v2 = 1;
    v18 = 0;
    v6 = CContactManager::LoadFeedbackString(v4, ModuleHandleW, 0x5DDu, &v18);
    *(_QWORD *)this = v6;
    if ( v6 )
      *v2 += v18;
    v8 = CContactManager::LoadFeedbackString(v7, v5, 0x5DEu, &v18);
    *((_QWORD *)this + 2) = v8;
    if ( v8 )
    {
      *v2 += v18;
      v2 = (_DWORD *)((char *)this + 48);
    }
    v10 = CContactManager::LoadFeedbackString(v9, v5, 0x5DFu, &v18);
    *((_QWORD *)this + 1) = v10;
    if ( v10 )
    {
      v12 = (_DWORD *)((char *)this + 48);
      *v2 += v18;
    }
    else
    {
      v12 = v2;
    }
    v13 = CContactManager::LoadFeedbackString(v11, v5, 0x5E0u, &v18);
    *((_QWORD *)this + 3) = v13;
    if ( v13 )
      *v2 += v18;
    else
      v12 = v2;
    v15 = CContactManager::LoadFeedbackString(v14, v5, 0x5E1u, &v18);
    *((_QWORD *)this + 4) = v15;
    if ( v15 )
    {
      v16 = (CContactManager *)(unsigned int)(v18 + *v2);
      *v12 = (_DWORD)v16;
    }
    v17 = CContactManager::LoadFeedbackString(v16, v5, 0x5DCu, &v18);
    *((_QWORD *)this + 5) = v17;
    if ( v17 )
      *v12 += 4 * v18;
  }
}
