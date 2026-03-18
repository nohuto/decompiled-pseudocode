/*
 * XREFs of ?TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z @ 0x1400F4FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1400F5128 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::TransferTokens(SfmTokenArray *this, struct SfmTokenArray *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r14d
  int v6; // edi
  const void *v7; // rbp
  unsigned int v8; // ecx

  W32GetSessionState(this);
  v5 = *((_DWORD *)a2 + 3);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(const void **)a2;
    W32GetSessionState(v4);
    v6 = SfmTokenArray::EnsureTokenBufferSize(this, v5);
    if ( v6 >= 0 )
    {
      memmove((void *)(*(_QWORD *)this + (unsigned int)(40 * *((_DWORD *)this + 3))), v7, 40 * v5);
      v8 = v5 + *((_DWORD *)this + 3);
      *((_DWORD *)this + 3) = v8;
      if ( v8 > *((_DWORD *)this + 2) )
        *((_DWORD *)this + 2) = v8;
    }
    *((_DWORD *)a2 + 3) = 0;
  }
  return (unsigned int)v6;
}
