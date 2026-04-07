/*
 * XREFs of ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180015050
 * Callers:
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016940 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016880 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180016DE0 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CContainerVisual::DoHitTest(
        CContainerVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  struct CVisual *v4; // r10
  __int64 v6; // r15
  char v7; // si
  char v8; // r14
  unsigned int v9; // ebx
  CVisual *v10; // r13
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  struct CVisual *v13; // [rsp+38h] [rbp-28h] BYREF
  struct tagPOINT v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-Ch]
  char v17; // [rsp+58h] [rbp-8h]
  char v18; // [rsp+59h] [rbp-7h]

  v4 = 0LL;
  v13 = 0LL;
  v12 = 0;
  if ( !*((_QWORD *)this + 3) || (*((_BYTE *)this + 36) & 4) != 0 && *((_DWORD *)this + 30) != -1 )
  {
    VisualCollection::GetIterator((char *)this + 136, &v15, a3);
    v6 = v15;
    v7 = v18;
    v8 = v17;
    v9 = v16;
    while ( 1 )
    {
      if ( v8 )
      {
        if ( !v7 )
          --v9;
      }
      else
      {
        v8 = 1;
        v9 = *(_DWORD *)(v6 + 32) - 1;
      }
      if ( v9 == -1 )
        v7 = 1;
      if ( v7 )
        break;
      v10 = *(CVisual **)(*(_QWORD *)(v6 + 8) + 8LL * v9);
      v14 = 0LL;
      if ( CVisual::TransformFromParent(v10, a2, &v14) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *, struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 104LL))(
               v10,
               &v14,
               &v13,
               &v12) )
        {
          break;
        }
      }
    }
    v4 = v13;
    if ( !v13 )
    {
      CVisual::DoHitTest(this, a2, &v13, &v12);
      v4 = v13;
    }
  }
  *a3 = v4;
  *a4 = v12;
  return v4 != 0LL;
}
