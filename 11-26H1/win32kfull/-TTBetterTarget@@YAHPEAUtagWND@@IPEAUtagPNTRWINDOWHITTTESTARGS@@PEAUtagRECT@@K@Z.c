/*
 * XREFs of ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x140088200
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1402C2720 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

__int64 __fastcall TTBetterTarget(
        struct tagWND *a1,
        int a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        __int16 a5)
{
  unsigned int v5; // edi
  struct tagRECT v8; // xmm5
  LONG left; // r8d
  LONG right; // ecx
  LONG v11; // eax
  LONG top; // edx
  LONG bottom; // ecx
  LONG v14; // eax
  const struct _D3DMATRIX *v16; // r8
  int v17; // edx
  struct tagRECT v18; // xmm5
  const struct _D3DMATRIX *v19; // r8
  int v20; // edx
  struct tagRECT v21; // xmm5
  const struct _D3DMATRIX *v22; // r8
  int v23; // edx
  struct tagRECT v24; // xmm5
  const struct _D3DMATRIX *v25; // r8
  int v26; // edx
  struct tagRECT v27; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v28; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v30; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  v8 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v27 = v8;
  if ( a4 )
  {
    left = v27.left;
    right = v27.right;
    if ( v27.left <= a4->left )
      left = a4->left;
    v11 = a4->right;
    v27.left = left;
    if ( v27.right >= v11 )
      right = v11;
    v27.right = right;
    if ( left >= right )
      return 0LL;
    top = v27.top;
    bottom = v27.bottom;
    if ( v27.top <= a4->top )
      top = a4->top;
    v14 = a4->bottom;
    v27.top = top;
    if ( v27.bottom >= v14 )
      bottom = v14;
    v27.bottom = bottom;
    if ( top >= bottom )
      return 0LL;
    v8 = v27;
  }
  if ( !*((_QWORD *)a3 + 7) )
    return 1;
  if ( a2 + (a5 != 3 ? 0xFFF : 0) < (unsigned int)(*((_DWORD *)a3 + 16) + ((*((_DWORD *)a3 + 44) & 2) == 0 ? 0xFFF : 0)) )
  {
    v16 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v17 = *((_DWORD *)a3 + 21);
    v27 = v8;
    if ( GetScreenRect(&v28, v17, v16, &v27)->left >= *((_DWORD *)a3 + 19) )
      return 1;
    v19 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v20 = *((_DWORD *)a3 + 21);
    v27 = v18;
    if ( *((_DWORD *)a3 + 17) >= GetScreenRect(&v29, v20, v19, &v27)->right )
      return 1;
    v22 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v23 = *((_DWORD *)a3 + 21);
    v27 = v21;
    if ( (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v30, v23, v22, &v27)->left) >= *((_DWORD *)a3 + 20) )
      return 1;
    v25 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v26 = *((_DWORD *)a3 + 21);
    v27 = v24;
    if ( *((_DWORD *)a3 + 18) >= (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v31, v26, v25, &v27)->right)
      || (*((_DWORD *)a3 + 44) & 1) != 0 )
    {
      return 1;
    }
  }
  return v5;
}
