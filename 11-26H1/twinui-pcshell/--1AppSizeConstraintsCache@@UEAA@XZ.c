/*
 * XREFs of ??1AppSizeConstraintsCache@@UEAA@XZ @ 0x1801B266C
 * Callers:
 *     ??_EAppSizeConstraintsCache@@UEAAPEAXI@Z @ 0x1801B2630 (--_EAppSizeConstraintsCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AppSizeConstraintsCache::~AppSizeConstraintsCache(AppSizeConstraintsCache *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
}
