/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x140192A28
 * Callers:
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140192AB4 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 DpiCacheSlot; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _tagOEMBITMAPSET *v7; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v2 = (int)a1;
  v3 = a2;
  if ( !(_DWORD)a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
    {
      a2 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  }
  DpiCacheSlot = (unsigned int)GetDpiCacheSlot(v3, a2);
  v7 = (struct _tagOEMBITMAPSET *)(W32GetUserSessionState(v6, v5) + 43288 + 760 * DpiCacheSlot);
  EnsureOemBitmapInfoForDpiSlot(v7, v3);
  return (char *)v7 + 8 * v2 + 16;
}
