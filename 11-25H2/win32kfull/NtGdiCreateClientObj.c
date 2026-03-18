/*
 * XREFs of NtGdiCreateClientObj @ 0x1401E9830
 * Callers:
 *     <none>
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCreateClientObj(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 Object; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 inserted; // rax
  __int64 v9; // rdx
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = AllocateObject(24LL, 6LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v11, v3, v5, v6);
    inserted = 0LL;
    if ( v12 || (LOBYTE(v7) = 6, (inserted = HmgInsertObjectInternal(Object, 1LL, v7)) == 0) )
    {
      v1 = inserted;
      FreeObject(Object, 6LL);
    }
    else
    {
      v12 = Object;
      v1 = inserted | a1;
      HmgModifyHandleType(v1, v9);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v11);
  }
  return v1;
}
