/*
 * XREFs of NtReplacePartitionUnit @ 0x14071EC70
 * Callers:
 *     DifNtReplacePartitionUnitWrapper @ 0x140689160 (DifNtReplacePartitionUnitWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoReplacePartitionUnit @ 0x1407A0210 (IoReplacePartitionUnit.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409A6A70 (PiControlMakeUserModeCallersCopy.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtReplacePartitionUnit(__int128 *Address, __int128 *a2, int a3)
{
  struct _DEVICE_OBJECT *v6; // rsi
  void *v7; // rdi
  NTSTATUS UserModeCallersCopy; // ebx
  ULONG v9; // r8d
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v17[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v17[1] = 0LL;
  v17[0] = 0LL;
  v7 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_25;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_25;
  }
  v9 = 0x80000000;
  if ( a3 == 0x80000000 )
  {
    v10 = 0LL;
    v11 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v11, v10, v9);
    goto LABEL_25;
  }
  if ( a3 )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_25;
  }
  ProbeForRead(a2, 0x10uLL, 8u);
  ProbeForRead(Address, 0x10uLL, 8u);
  v18 = *a2;
  v19 = *Address;
  if ( (unsigned __int16)(v19 - 1) > 0xC8u || (BYTE2(v19) & 1) != 0 )
    goto LABEL_24;
  if ( (unsigned __int16)(v18 - 1) > 0xC8u || (BYTE2(v18) & 1) != 0 )
  {
LABEL_23:
    UserModeCallersCopy = -1073741584;
    goto LABEL_25;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((unsigned int)&P, DWORD2(v18), (unsigned __int16)v18, 2, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            (unsigned int)v17,
                            DWORD2(v19),
                            (unsigned __int16)v19,
                            2,
                            1,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      *((_QWORD *)&v18 + 1) = P;
      WORD1(v18) = v18;
      *((PVOID *)&v19 + 1) = v17[0];
      WORD1(v19) = v19;
      v12 = PnpDeviceObjectFromDeviceInstanceWithTag(&v18, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v12;
      if ( v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        if ( v13 )
        {
          if ( !_bittest((const signed __int32 *)(v13 + 396), 0x11u) )
          {
            v14 = PnpDeviceObjectFromDeviceInstanceWithTag(&v19, 1953261124LL);
            v7 = (void *)v14;
            if ( v14 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
              if ( v15 )
              {
                if ( !_bittest((const signed __int32 *)(v15 + 396), 0x11u) )
                {
                  v9 = 0;
                  v10 = v6;
                  v11 = (struct _DEVICE_OBJECT *)v14;
                  goto LABEL_7;
                }
              }
            }
LABEL_24:
            UserModeCallersCopy = -1073741585;
            goto LABEL_25;
          }
        }
      }
      goto LABEL_23;
    }
  }
LABEL_25:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v17[0] )
    ExFreePoolWithTag(v17[0], 0);
  return (unsigned int)UserModeCallersCopy;
}
