/*
 * XREFs of ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400B3250
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1400B2E90 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::GetNotificationTokens(
        SfmTokenArray *this,
        unsigned int a2,
        unsigned int *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int *v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // edi

  v6 = 0;
  v7 = a2 / 0x28;
  v8 = (unsigned int *)((char *)this + 12);
  v9 = *((_DWORD *)this + 3);
  v10 = v9;
  if ( a2 / 0x28 <= v9 )
    v10 = a2 / 0x28;
  memmove(a4, *(const void **)this, 40 * v10);
  if ( v10 < *v8 )
    memmove(*(void **)this, (const void *)(*(_QWORD *)this + 40 * v10), 40 * (*v8 - v10));
  *v8 -= v10;
  *a3 = v10;
  if ( v7 <= v9 && *v8 )
    return (unsigned int)-1073741789;
  return v6;
}
