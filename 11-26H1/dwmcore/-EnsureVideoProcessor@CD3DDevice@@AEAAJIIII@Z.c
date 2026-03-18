/*
 * XREFs of ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x1800152C4
 * Callers:
 *     ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x180014F24 (-VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnsureVideoProcessor(
        CD3DDevice *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // ebx
  char *v6; // r12
  unsigned int *v7; // r14
  char *v11; // r15
  int v12; // eax
  int v13; // r10d
  char *v14; // rbp
  unsigned int v15; // eax
  _QWORD *v16; // r13
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _DWORD *, char *); // rbx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, _QWORD, _QWORD, char *); // rbx
  unsigned int v26; // [rsp+30h] [rbp-88h]
  unsigned int v28; // [rsp+34h] [rbp-84h]
  unsigned int v29; // [rsp+38h] [rbp-80h]
  unsigned int v30; // [rsp+3Ch] [rbp-7Ch]
  _DWORD v31[10]; // [rsp+40h] [rbp-78h] BYREF

  v5 = 0;
  v6 = (char *)this + 1048;
  v7 = (unsigned int *)((char *)this + 1056);
  if ( !*((_QWORD *)this + 131)
    || a2 > *v7
    || a3 > *((_DWORD *)this + 265)
    || a4 > *((_DWORD *)this + 266)
    || a5 > *((_DWORD *)this + 267) )
  {
    v11 = (char *)this + 1024;
    if ( *((_QWORD *)this + 128)
      || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1024),
          v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 68))(
                  *((_QWORD *)this + 68),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  v11),
          v5 = v12,
          v12 >= 0) )
    {
      v14 = (char *)this + 1032;
      if ( *((_QWORD *)this + 129)
        || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1032),
            v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 69))(
                   *((_QWORD *)this + 69),
                   &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
                   (char *)this + 1032),
            v13 = v5,
            v5 >= 0) )
      {
        v16 = (_QWORD *)((char *)this + 1040);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1040);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
        v17 = *v7;
        v18 = *((_DWORD *)this + 265);
        if ( a2 > *v7 )
          v17 = a2;
        v19 = *((_DWORD *)this + 266);
        v20 = *((_DWORD *)this + 267);
        if ( a3 > v18 )
          v18 = a3;
        v21 = *(_QWORD *)v11;
        if ( a4 > v19 )
          v19 = a4;
        v31[3] = v17;
        if ( a5 > v20 )
          v20 = a5;
        v31[8] = v20;
        v31[0] = 0;
        v31[1] = 1;
        v31[2] = 1;
        v31[4] = v18;
        v31[5] = 1;
        v31[6] = 1;
        v31[7] = v19;
        v31[9] = 0;
        v26 = v17;
        v29 = v18;
        v28 = v19;
        v22 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v21 + 80LL);
        v30 = v20;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1040);
        v5 = v22(v21, v31, (char *)this + 1040);
        v13 = v5;
        if ( v5 < 0 )
        {
          v15 = 2124;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v16 + 72LL))(*v16, (char *)this + 984);
          v13 = v5;
          if ( v5 < 0 )
          {
            v15 = 2126;
          }
          else
          {
            v23 = *(_QWORD *)v11;
            v24 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(**(_QWORD **)v11 + 32LL);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
            v5 = v24(v23, *v16, 0LL, v6);
            v13 = v5;
            if ( v5 >= 0 )
            {
              *v7 = v26;
              *((_DWORD *)this + 265) = v29;
              *((_DWORD *)this + 266) = v28;
              *((_DWORD *)this + 267) = v30;
              return (unsigned int)v5;
            }
            v15 = 2130;
          }
        }
      }
      else
      {
        v15 = 2101;
      }
    }
    else
    {
      v13 = v12;
      v14 = (char *)this + 1032;
      v15 = 2096;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v15, 0LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1040);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v14);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v11);
    *v7 = 0;
    *(_QWORD *)((char *)this + 1060) = 0LL;
    *((_DWORD *)this + 267) = 0;
  }
  return (unsigned int)v5;
}
