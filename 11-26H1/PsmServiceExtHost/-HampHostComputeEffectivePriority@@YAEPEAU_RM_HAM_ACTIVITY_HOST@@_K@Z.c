/*
 * XREFs of ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180057890
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostComputeEffectivePriority(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  char *v3; // rax
  char *v4; // rcx
  unsigned __int8 v6; // r8
  char *v7; // rax
  char v8; // cl
  __int64 v9; // rdx
  unsigned __int8 v11; // cl

  v2 = *((_QWORD *)a1 + 108);
  v3 = (char *)a1 + 608;
  v4 = (char *)*((_QWORD *)a1 + 76);
  v6 = 80;
  if ( v4 != v3 )
  {
    v7 = v4 - 96;
    if ( v4 != (char *)96 )
    {
      do
      {
        v8 = v7[562];
        if ( (v8 == 3 || v8 == 2 && v7[563]) && (v7[552] & 8) == 0 )
        {
          if ( a2 < v2 )
          {
            v11 = v6;
            if ( v6 >= (unsigned __int8)v7[427] )
              v11 = v7[427];
            v6 = v11;
          }
          else if ( v6 >= (unsigned __int8)v7[428] )
          {
            v6 = v7[428];
          }
        }
        v9 = *((_QWORD *)v7 + 12);
        if ( v9 == *((_QWORD *)v7 + 10) + 608LL )
          break;
        v7 = (char *)(v9 - 96);
      }
      while ( v9 != 96 );
    }
  }
  return v6;
}
