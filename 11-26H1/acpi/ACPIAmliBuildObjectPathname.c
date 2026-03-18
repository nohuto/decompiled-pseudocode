/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x14002C5E4
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x14002C54C (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIBuildDockExtension @ 0x1400579E0 (ACPIBuildDockExtension.c)
 *     ACPIBusIommuBusInterface @ 0x1400A8774 (ACPIBusIommuBusInterface.c)
 *     LinkNodeFindByName @ 0x1400BC194 (LinkNodeFindByName.c)
 *     PcisuppSetRoutingInfo @ 0x1400C4A80 (PcisuppSetRoutingInfo.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400CFA30 (AcpiGetFullyQualifiedBiosName.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x14002C7E4 (AMLIGetNameSpaceObjectPath.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(_QWORD *a1, PVOID *a2, char a3)
{
  unsigned int v3; // r13d
  int v7; // esi
  _BYTE *ObjectPath; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  char *v12; // rbx
  unsigned int v13; // r14d
  char v15; // cl
  char *v16; // rdx
  unsigned int v17; // edi
  char *v18; // rdx
  BOOL v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // edi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // ecx
  _BYTE *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v30 = 0;
  v7 = -1073741823;
  if ( a1 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(*a1);
    if ( ObjectPath )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( ObjectPath[v9] );
      v10 = v9 + 1;
      v30 = v10;
      ExFreePoolWithTag(ObjectPath, 0);
      Pool2 = ExAllocatePool2(64LL, v10, 1399874369LL);
      v12 = (char *)Pool2;
      if ( Pool2 )
      {
        v7 = AMLIGetNameSpaceObjectPath(a1, Pool2, &v30);
        if ( v7 < 0 )
        {
          ExFreePoolWithTag(v12, 0x53706341u);
        }
        else
        {
          v13 = v30;
          if ( *v12 == 92 && (a3 & 1) == 0 )
            memmove(v12, v12 + 1, v30 - 1);
          if ( (a3 & 2) != 0 )
          {
            v15 = *v12;
            v16 = v12;
            while ( v15 )
            {
              if ( (unsigned __int8)(v15 - 97) <= 0x19u )
                *v16 = v15 - 32;
              v15 = *++v16;
            }
          }
          *a2 = v12;
          if ( (a3 & 4) != 0 )
          {
            v17 = *v12 == 92;
            if ( v17 < v13 )
            {
              v18 = &v12[*v12 == 92];
              v19 = *v12 == 92;
              v20 = v13 - v17;
              do
              {
                v17 = v19 + 5;
                if ( *v18 != 46 )
                  v17 = v19;
                ++v18;
                v19 = v17;
                --v20;
              }
              while ( v20 );
            }
            v21 = v17 + 5;
            if ( v21 != v13 )
            {
              v22 = (_BYTE *)ExAllocatePool2(64LL, v21, 1399874369LL);
              v23 = v21 - 1;
              v24 = 0;
              v25 = v22;
              v22[v23] = 0;
              if ( *v12 == 92 )
              {
                *v22 = 92;
                ++v12;
                v24 = 1;
              }
              if ( v24 < (unsigned int)v23 )
              {
                v26 = v24;
                v27 = (unsigned int)v23 - v24;
                do
                {
                  if ( v3 < 4 && *v12 == 46 || (v28 = *v12) == 0 )
                    v28 = 95;
                  else
                    ++v12;
                  v25[v26] = v28;
                  v29 = v3 + 1;
                  v3 = 0;
                  ++v26;
                  if ( v29 <= 4 )
                    v3 = v29;
                  --v27;
                }
                while ( v27 );
              }
              ExFreePoolWithTag(*a2, 0);
              *a2 = v25;
            }
          }
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v7;
}
