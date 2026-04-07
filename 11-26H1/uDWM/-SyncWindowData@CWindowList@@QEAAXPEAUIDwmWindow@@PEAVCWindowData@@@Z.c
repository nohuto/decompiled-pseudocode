/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18003B47C
 * Callers:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003B930 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BB00 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetWindowThemeAttributes@@YAKQEAUHWND__@@@Z @ 0x18003BC0C (-GetWindowThemeAttributes@@YAKQEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  __int64 v6; // rax
  char v7; // al
  char v8; // al
  __int16 v9; // ax
  char v10; // al
  HWND v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 80LL))(a2, (char *)a3 + 220);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 236);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 252);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 112LL))(a2, (char *)a3 + 80);
  *((_DWORD *)a3 + 29) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 32) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_BYTE *)a3 + 736) ^= ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2) ^ *((_BYTE *)a3 + 736)) & 1;
  *((_QWORD *)a3 + 17) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
  *((_OWORD *)a3 + 21) = *(_OWORD *)v6;
  *((_OWORD *)a3 + 22) = *(_OWORD *)(v6 + 16);
  *((_OWORD *)a3 + 23) = *(_OWORD *)(v6 + 32);
  *((_OWORD *)a3 + 24) = *(_OWORD *)(v6 + 48);
  *((_QWORD *)a3 + 50) = *(_QWORD *)(v6 + 64);
  *((_BYTE *)a3 + 736) ^= (*((_BYTE *)a3 + 736) ^ (2
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2))) & 2;
  *((_BYTE *)a3 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 737) ^= ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2) ^ *((_BYTE *)a3 + 737)) & 1;
  *((_BYTE *)a3 + 740) ^= (*((_BYTE *)a3 + 740) ^ (8
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2))) & 8;
  *(_OWORD *)((char *)a3 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 216LL))(
                                               a2,
                                               v12);
  *((_BYTE *)a3 + 736) ^= (*((_BYTE *)a3 + 736) ^ (16
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2))) & 0x10;
  *((_BYTE *)a3 + 738) ^= (*((_BYTE *)a3 + 738) ^ ((*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2) << 6)) & 0x40;
  *((_BYTE *)a3 + 740) ^= ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2) ^ *((_BYTE *)a3 + 740)) & 1;
  *((_BYTE *)a3 + 740) ^= (*((_BYTE *)a3 + 740) ^ (32
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2))) & 0x20;
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  *((_BYTE *)a3 + 740) &= ~0x40u;
  *((_BYTE *)a3 + 740) |= v7 < 0 ? 0x40 : 0;
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  *((_BYTE *)a3 + 740) &= ~0x80u;
  *((_BYTE *)a3 + 740) |= (v8 & 0x40) != 0 ? 0x80 : 0;
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  *((_BYTE *)a3 + 741) &= ~1u;
  *((_BYTE *)a3 + 741) |= (v9 & 0x1000) != 0;
  *((_BYTE *)a3 + 741) ^= (*((_BYTE *)a3 + 741) ^ (2
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 384LL))(a2))) & 2;
  *((_DWORD *)a3 + 46) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 392LL))(a2);
  *((_DWORD *)a3 + 47) = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 400LL))(a2, 0LL);
  *((_DWORD *)a3 + 48) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 400LL))(a2, 1LL);
  *((_DWORD *)a3 + 49) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 400LL))(a2, 2LL);
  *((_BYTE *)a3 + 742) ^= (*((_BYTE *)a3 + 742) ^ (2
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 408LL))(a2))) & 2;
  *((_DWORD *)a3 + 51) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 416LL))(a2);
  v10 = *((_BYTE *)a3 + 740);
  if ( (v10 & 9) == 0 )
    *((_BYTE *)a3 + 740) = v10 & 0xEF;
  *((_BYTE *)a3 + 739) ^= (*((_BYTE *)a3 + 739) ^ (16
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2))) & 0x10;
  *((_BYTE *)a3 + 740) ^= (*((_BYTE *)a3 + 740) ^ (4
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2))) & 4;
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v11 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 220);
  *((_DWORD *)a3 + 103) = GetWindowThemeAttributes(v11);
  *((_BYTE *)a3 + 740) ^= (*((_BYTE *)a3 + 740) ^ (2
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2))) & 2;
}
