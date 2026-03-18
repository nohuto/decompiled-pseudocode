/*
 * XREFs of ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x1800A9D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1800A9DE8 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 *     ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x1801547F8 (-Add@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@.c)
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x180154A64 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 */

__int64 __fastcall CManipulationContext::SetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  __int64 v3; // r11
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v7; // rdx
  __int64 i; // r9
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((int *)this + 24);
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 80);
  v7 = 0LL;
  for ( i = 0LL; i < v3; ++i )
  {
    if ( *(_DWORD *)(*v5 + 4 * i) == a2 )
    {
      if ( (_DWORD)v7 != -1 )
      {
        if ( a3 )
          CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::SetAtIndex(v5, v7, &v10, a3);
        else
          CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveRange();
        return v4;
      }
      break;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  if ( a3 && !(unsigned int)CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::Add(v5, &v10) )
    return (unsigned int)-2147024882;
  return v4;
}
