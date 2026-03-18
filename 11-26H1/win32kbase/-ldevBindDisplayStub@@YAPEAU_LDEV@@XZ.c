/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x14000C93C
 * Callers:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x14000D0CC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

struct _LDEV *__fastcall ldevBindDisplayStub(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *i; // rbx
  __int64 v3; // rax
  __int64 v5; // rax
  tagDRVENABLEDATA v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  for ( i = *(_DWORD **)(v1 + 1816); i; i = *(_DWORD **)i )
  {
    if ( (i[10] & 8) != 0 )
    {
      ++i[9];
      return (struct _LDEV *)i;
    }
  }
  v3 = PALLOCMEM(912LL, 1986292807LL);
  i = (_DWORD *)v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) |= 0xAu;
    *(_DWORD *)(v3 + 32) = 1;
    *(_DWORD *)(v3 + 36) = 1;
    *(_QWORD *)(v3 + 904) = v3 + 72;
    v6.pdrvfn = (DRVFN *)&unk_14024F0F0;
    *(_DWORD *)(v3 + 68) = 0;
    v6.iDriverVersion = 196864;
    v6.c = 16;
    if ( (unsigned int)ldevFillTable((struct _LDEV *)v3, &v6) )
    {
      v5 = *(_QWORD *)(v1 + 1816);
      if ( v5 )
        *(_QWORD *)(v5 + 8) = i;
      *(_QWORD *)i = *(_QWORD *)(v1 + 1816);
      *((_QWORD *)i + 1) = 0LL;
      *(_QWORD *)(v1 + 1816) = i;
    }
    else
    {
      GreDeleteFastMutex(i);
      return 0LL;
    }
  }
  return (struct _LDEV *)i;
}
