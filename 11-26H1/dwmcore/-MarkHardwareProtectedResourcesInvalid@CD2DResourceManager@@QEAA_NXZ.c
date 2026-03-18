/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x1802A9188
 * Callers:
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x18020A574 (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 * Callees:
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801358C8 (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x180135958 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(CD2DResourceManager *this)
{
  CD2DContext *v1; // rsi
  char v2; // di
  char *v3; // rbx
  struct CD2DResource *v5; // r12
  CD2DContext *v6; // r15
  bool v7; // zf
  char *v8; // rdi
  CD2DContext *v9; // rcx
  CD2DContext **v10; // rax
  char *v11; // rcx

  v1 = *(CD2DContext **)this;
  v2 = 0;
  v3 = 0LL;
  if ( *(CD2DResourceManager **)this != this )
  {
    do
    {
      v5 = (CD2DContext *)((char *)v1 - 56);
      v6 = v1;
      v7 = *((_BYTE *)v1 - 6) == 0;
      v1 = *(CD2DContext **)v1;
      if ( !v7 )
      {
        v8 = 0LL;
        if ( v1 != this && v1 != (CD2DContext *)56 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v1 - 7) + 8LL))((__int64)v1 - 56);
          v8 = (char *)v1 - 56;
        }
        v9 = *(CD2DContext **)v6;
        if ( *(CD2DContext **)(*(_QWORD *)v6 + 8LL) != v6 || (v10 = (CD2DContext **)*((_QWORD *)v6 + 1), *v10 != v6) )
          __fastfail(3u);
        *v10 = v9;
        *((_QWORD *)v9 + 1) = v10;
        CD2DResourceManager::UnmanageResource((CD2DContext **)this, v5);
        CD2DResource::MarkInvalid(v5);
        v11 = v3;
        v3 = v8;
        if ( v11 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
        v2 = 1;
      }
    }
    while ( v1 != this );
    if ( v3 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
