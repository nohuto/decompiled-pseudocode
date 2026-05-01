/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033598
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180032630 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800337CC (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  char *v5; // rdi
  __int64 v7; // r12
  signed int v8; // r9d
  struct _RM_ACTIVITY_HOST **i; // r10
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 First; // rdx
  __int64 v15; // rbp
  int v16; // ebx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r11
  DWORD v21; // esi
  _QWORD *Value; // rbx
  __int64 *v23; // rax
  __int64 v24; // r8
  int v26; // eax

  if ( a3 )
  {
    v5 = (char *)a4 + 16;
    v7 = a3;
    do
    {
      if ( v5[5] )
      {
        v8 = 0;
        for ( i = (struct _RM_ACTIVITY_HOST **)((char *)a5 + 1120); ; i += 3 )
        {
          if ( v8 >= 2 )
          {
            v16 = 101;
            goto LABEL_25;
          }
          if ( _bittest((const int *)&a2, v8) )
          {
            v10 = 0LL;
            if ( *i != (struct _RM_ACTIVITY_HOST *)((char *)a5 + 16 * v8 + 8 * v8 + 1120) )
              v10 = (__int64)*i - 1296;
            if ( v10 )
              break;
          }
          ++v8;
        }
        v11 = *(_QWORD *)(v10 + 1296);
        v12 = *(_QWORD *)(v10 + 1320);
        v13 = *(int *)(v10 + 1328);
        First = 0LL;
        if ( v11 != v12 + 8 * (v13 + 2 * (v13 + 70)) )
          First = v11 - 1296;
        if ( !First )
          First = RmpActivityHostEnumerateResourceSetGetFirst(v12, a2, (unsigned int)(v13 + 1));
        v15 = *((int *)v5 - 4);
        v16 = 101;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v10 + 4 * v15 + 1488);
          v10 = First;
          if ( v16 < v17 )
            v17 = v16;
          v16 = v17;
          if ( !First )
            break;
          v18 = *(_QWORD *)(First + 1296);
          v19 = *(_QWORD *)(First + 1320);
          v20 = *(int *)(First + 1328);
          First = 0LL;
          if ( v18 != v19 + 8 * (v20 + 2 * (v20 + 70)) )
            First = v18 - 1296;
          if ( !First )
            First = RmpActivityHostEnumerateResourceSetGetFirst(v19, a2, (unsigned int)(v20 + 1));
        }
LABEL_25:
        v21 = HampLockTrackerId;
        if ( v16 >= *(_DWORD *)v5 )
          v16 = *(_DWORD *)v5;
        *(_DWORD *)v5 = v16;
        if ( v21 != -1 )
        {
          Value = TlsGetValue(v21);
          if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
        }
        RtlAcquireSRWLockShared((char *)a5 + 56);
        if ( (unsigned int)HampHostHasExternalResourceAccess((_QWORD *)a5 + 7, *((_DWORD *)v5 - 4)) )
        {
          v26 = *(_DWORD *)v5;
          if ( *(int *)v5 > 2 )
            v26 = 2;
          *(_DWORD *)v5 = v26;
        }
        if ( HampLockTrackerId != -1 )
        {
          v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v24 = *v23;
          if ( (*v23 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          if ( v23[2]-- == 1 )
            *v23 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared((char *)a5 + 56);
      }
      v5 += 24;
      --v7;
    }
    while ( v7 );
  }
}
