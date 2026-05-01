/*
 * XREFs of ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x180657F64
 * Callers:
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA664 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x1806591B0 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180659504 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 */

__int64 __fastcall CachedSTAObject_SetObject(DWORD a1, struct IUnknown *a2)
{
  int CachedSTAObject; // edi
  CCachedSTAObject *v4; // rbx
  CCachedSTAObject *v6; // [rsp+40h] [rbp+18h] BYREF

  CachedSTAObject = 1;
  if ( a1 != -1 )
  {
    v6 = 0LL;
    CachedSTAObject = _GetCachedSTAObject(a1, 0LL, &v6);
    if ( CachedSTAObject < 0 )
    {
      return 1;
    }
    else
    {
      v4 = v6;
      IUnknown_Set((IUnknown **)v6 + 4, a2);
      CCachedSTAObject::Release(v4);
    }
  }
  return (unsigned int)CachedSTAObject;
}
