/*
 * XREFs of IopCreateSecurityDescriptorPerType @ 0x14091BFD0
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14091B880 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 * Callees:
 *     RtlAddMandatoryAce @ 0x1409027C0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopCreateSecurityDescriptorPerType(char *a1, int a2, ACL **a3, int *a4)
{
  char v7; // bp
  int v8; // edx
  int v9; // edx
  PACL Flink; // rdi
  ULONG v11; // r15d
  ACL *Pool2; // rax
  ACL *v13; // r14
  char v14; // cl
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 result; // rax
  int v19; // edx
  int v20; // edx
  int v21; // ecx

  v7 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v19 = v9 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 != 1 )
            return 3221225485LL;
          Flink = (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink;
          goto LABEL_4;
        }
        Flink = (PACL)PspSiloMonitorLock.SchedulingGroup;
      }
      else
      {
        Flink = (PACL)PspSiloMonitorLock.ApcState.Process;
      }
      v7 = 1;
    }
    else
    {
      Flink = SePublicDefaultUnrestrictedDacl;
    }
  }
  else
  {
    Flink = (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink;
  }
LABEL_4:
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *a1 = 1;
  if ( v7 != 1 )
    goto LABEL_10;
  v11 = (unsigned __int16)(4
                         * (*(unsigned __int8 *)(*(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter + 1LL) + 6));
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCreateAcl(Pool2, v11, 2u);
  RtlAddMandatoryAce(v13, 2u, 0, *(PSID *)&SepRmCapTableLock.SchedulerAssistYieldCounter, 0x11u, 1u);
  v14 = *a1;
  if ( *a1 == 1 )
  {
    v15 = *((_WORD *)a1 + 1);
    if ( v15 >= 0 )
    {
      *((_QWORD *)a1 + 3) = v13;
      *((_WORD *)a1 + 1) = v15 & 0xFFCF | 0x10;
    }
  }
  *a3 = v13;
  if ( v14 != 1 )
  {
    result = 3221225560LL;
  }
  else
  {
LABEL_10:
    v16 = *((_WORD *)a1 + 1);
    if ( v16 < 0 )
    {
      result = 3221225593LL;
    }
    else
    {
      v17 = v16 | 4;
      *((_QWORD *)a1 + 4) = 0LL;
      if ( Flink )
        *((_QWORD *)a1 + 4) = Flink;
      *((_WORD *)a1 + 1) = v17 & 0xFFF7;
      result = 0LL;
    }
  }
  if ( a4 )
  {
    v21 = *a4 | 4;
    *a4 = v21;
    if ( v7 )
      *a4 = v21 | 0x10;
  }
  return result;
}
