/*
 * XREFs of ?HampDepHostStackInsert@@YAXPEAU_HAM_DEP_HOST_STACK@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064B8C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016510 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D7A4 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     <none>
 */

void __fastcall HampDepHostStackInsert(unsigned __int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // rax

  v2 = *((_DWORD *)a2 + 196);
  v3 = 0LL;
  v5 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v5 )
      v5 ^= a1;
    else
      v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (v2 >> 2) & 3;
    while ( 1 )
    {
      if ( v6 > ((*(_DWORD *)(v5 + 24) >> 2) & 3u) )
      {
        v7 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !v7 )
            break;
          v7 ^= v5;
        }
        if ( !v7 )
          break;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !v7 )
          {
LABEL_9:
            LOBYTE(v3) = 1;
            break;
          }
          v7 ^= v5;
        }
        if ( !v7 )
          goto LABEL_9;
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx(a1, v5, v3, (char *)a2 + 760);
}
