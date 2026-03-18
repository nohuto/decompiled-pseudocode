/*
 * XREFs of SendShellClipChanged @ 0x1401BA170
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // bp
  _BYTE *v4; // rbx
  int v6; // edi
  unsigned __int64 v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = v12;
  v6 = 32;
  memset(v12, 0, 32);
  if ( a2 <= 1
    || (v7 = 16LL * (a2 - 1), v3 = 1, v7 <= 0xFFFFFFFF)
    && (v8 = v7 + 32, v8 >= 0x20)
    && (v6 = v8, (v4 = (_BYTE *)Win32AllocPoolZInitImpl(256LL, v8, 0x63736355u)) != 0LL) )
  {
    *(_DWORD *)v4 = 3;
    *((_DWORD *)v4 + 2) = v2;
    memmove(v4 + 12, Src, 16 * v2);
    SendMessageTo(0, (int)v4, v6);
    if ( v3 )
      GreDeleteFastMutex(v4, v9, v10, v11);
  }
}
