/*
 * XREFs of SendShellClipChanged @ 0x14019D470
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14015C72C (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // bp
  _BYTE *v4; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // rcx
  unsigned int v8; // ecx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = v9;
  v6 = 32;
  memset(v9, 0, 32);
  if ( a2 <= 1
    || (v7 = 16LL * (a2 - 1), v3 = 1, v7 <= 0xFFFFFFFF)
    && (v8 = v7 + 32, v8 >= 0x20)
    && (v6 = v8, (v4 = (_BYTE *)Win32AllocPoolZInitImpl(256LL, v8, 0x63736355u)) != 0LL) )
  {
    *(_DWORD *)v4 = 3;
    *((_DWORD *)v4 + 2) = v2;
    memmove(v4 + 12, Src, 16 * v2);
    SendMessageTo(0LL, v4, v6);
    if ( v3 )
      GreDeleteFastMutex(v4);
  }
}
