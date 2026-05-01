/*
 * XREFs of ?Show@CDropFeedback@@UEAAJXZ @ 0x18051C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D86F4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::Show(HWND *this)
{
  unsigned int v2; // r15d
  HWND v3; // rcx
  __int64 v4; // rdx
  unsigned int i; // r14d
  HWND v6; // rdi
  int (__fastcall *v7)(HWND, _QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rbx
  HWND v8; // rcx
  __int64 v9; // r8
  unsigned int v11; // [rsp+30h] [rbp-20h] BYREF
  int pvAttribute; // [rsp+34h] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+38h] [rbp-18h] BYREF

  pvAttribute = 1;
  v2 = 0;
  DwmSetWindowAttribute(this[5], 0xDu, &pvAttribute, 4u);
  ShowWindow(this[5], 4);
  if ( ((_BYTE)this[12] & 1) != 0 )
  {
    if ( SetForegroundWindow(this[5]) )
    {
      if ( ((_BYTE)this[12] & 2) != 0 && GetKeyState(91) >= 0 && GetKeyState(92) >= 0 )
        PostMessageW(this[5], 0x101u, 0x5BuLL, 0LL);
    }
    else
    {
      v2 = -2147019873;
    }
  }
  (*(void (__fastcall **)(HWND, GUID *))(*(_QWORD *)this[15] + 24LL))(this[15], &GUID_NULL);
  v3 = this[13];
  v11 = 0;
  (*(void (__fastcall **)(HWND, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v11);
  for ( i = 0; i < v11; ++i )
  {
    v6 = this[13];
    v13.Ptr = 0LL;
    v7 = *(int (__fastcall **)(HWND, _QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
    if ( v7(v6, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v13) >= 0 )
      (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v13.Ptr + 72LL))(v13.Ptr);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
  }
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(HWND, __int64))(*(_QWORD *)this[15] + 32LL))(this[15], v4);
  v8 = this[5];
  pvAttribute = 0;
  DwmSetWindowAttribute(v8, 0xDu, &pvAttribute, 4u);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DropFeedback_Show_Info, v9, 1u, &v13);
  return v2;
}
