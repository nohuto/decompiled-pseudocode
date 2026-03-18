/*
 * XREFs of SpbCheckDce @ 0x14005A370
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SpbCheck @ 0x14005856C (SpbCheck.c)
 *     RevalidateDCE @ 0x14005A190 (RevalidateDCE.c)
 * Callees:
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  int bottom; // edi
  int right; // r14d
  LONG top; // ebx
  LONG left; // esi
  unsigned int v9; // r12d
  __int64 StyleWindow; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  struct tagWND *v14; // rcx
  _DWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  struct tagRECT v20; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  result = GreGetBounds(v2, &v20, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( !v4 || (v16 = *(_DWORD *)(a1 + 48), (v16 & 0x4000) != 0) || v16 < 0 )
    {
      bottom = v20.bottom;
      right = v20.right;
      top = v20.top;
      left = v20.left;
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 40);
      v18 = *(_DWORD *)(v17 + 32);
      bottom = v18 + v20.bottom;
      v19 = *(_DWORD *)(v17 + 28);
      left = v19 + v20.left;
      right = v19 + v20.right;
      top = v18 + v20.top;
      v20.left += v19;
      v20.top += v18;
      v20.right += v19;
      v20.bottom += v18;
    }
    v9 = *(_DWORD *)(a1 + 48);
    if ( (v9 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 80), 2848);
      if ( StyleWindow )
      {
        v11 = *(_QWORD *)(StyleWindow + 40);
        v12 = *(_DWORD *)(v11 + 92);
        bottom += v12;
        v13 = *(_DWORD *)(v11 + 88);
        left += v13;
        right += v13;
        v20.left = left;
        top += v12;
        v20.right = right;
        v20.top = top;
        v20.bottom = bottom;
      }
    }
    v14 = *(struct tagWND **)(a1 + 80);
    v15 = (_DWORD *)*((_QWORD *)v14 + 5);
    if ( left <= v15[22] )
      left = v15[22];
    v20.left = left;
    result = (unsigned int)v15[24];
    if ( right >= (int)result )
      right = v15[24];
    v20.right = right;
    if ( left < right )
    {
      if ( top <= v15[23] )
        top = v15[23];
      v20.top = top;
      result = (unsigned int)v15[25];
      if ( bottom >= (int)result )
        bottom = v15[25];
      v20.bottom = bottom;
      if ( top < bottom )
        return SpbCheckRect(v14, &v20, v9);
    }
  }
  return result;
}
