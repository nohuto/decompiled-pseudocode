/*
 * XREFs of CleanupOEMBitmaps @ 0x140203110
 * Callers:
 *     CreateBitmapStrip @ 0x1400C0830 (CreateBitmapStrip.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupOEMBitmaps(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx

  result = W32GetUserSessionState(a1, a2);
  v3 = 18LL;
  v4 = (_QWORD *)(result + 43288);
  do
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    if ( *v4 )
    {
      GreSetBitmapOwner(*v4, 2147483650LL);
      result = GreDeleteObject(*v4);
      *v4 = 0LL;
    }
    v4 += 95;
    --v3;
  }
  while ( v3 );
  return result;
}
