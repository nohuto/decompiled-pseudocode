/*
 * XREFs of PspSetJobIoAttribution @ 0x140958108
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1407F9484 (PspSetJobIoRateControl.c)
 * Callees:
 *     IoStartDiskIoAttributionForContext @ 0x140494EF4 (IoStartDiskIoAttributionForContext.c)
 *     EtwTracePsIoAttribution @ 0x140958300 (EtwTracePsIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1409583C4 (PspIsSetJobIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     IoDiskIoAttributionAllocate @ 0x140AFB68C (IoDiskIoAttributionAllocate.c)
 *     PspRemoveIoAttribution @ 0x140AFC3A8 (PspRemoveIoAttribution.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, __int64 a2, char a3, unsigned int a4)
{
  char v4; // r14
  char v7; // r15
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v7 = a2;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v13 = Object[394];
    if ( v13 < a4 )
    {
      v10 = 0LL;
      v11 = -1073741811;
      goto LABEL_12;
    }
    v14 = v13 - a4;
    Object[394] = v14;
    if ( v14 )
    {
      v10 = *((_QWORD *)Object + 198);
    }
    else
    {
LABEL_22:
      v17 = Object[395];
      v10 = *((_QWORD *)Object + 198);
      if ( v17 > a4 )
      {
        Object[395] = v17 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        Object[395] = 0;
      }
    }
    goto LABEL_8;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
  {
    v10 = 0LL;
    v11 = -1073741637;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v9 = Object[394];
    if ( v9 + a4 < v9 )
    {
      v10 = 0LL;
      v11 = -1073741670;
      goto LABEL_12;
    }
    if ( v9 )
    {
      Object[394] = v9 + a4;
LABEL_7:
      v10 = *((_QWORD *)Object + 198);
LABEL_8:
      v11 = 0;
      goto LABEL_12;
    }
    Object[394] = a4;
    v4 = 1;
  }
  v15 = Object[395];
  if ( v15 + a4 < v15 )
  {
    v11 = -1073741670;
  }
  else
  {
    if ( v15 )
    {
      Object[395] = v15 + a4;
      goto LABEL_7;
    }
    v16 = IoDiskIoAttributionAllocate(Object, 0LL);
    v10 = v16;
    if ( v16 )
    {
      IoStartDiskIoAttributionForContext(v16);
      v18[0] = v10;
      LOBYTE(v19) = 1;
      v18[1] = (__int64)Object;
      PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v18, 5);
      Object[395] = a4;
      *((_QWORD *)Object + 198) = v10;
      goto LABEL_8;
    }
    v11 = -1073741801;
  }
  v10 = 0LL;
  if ( v4 )
    Object[394] -= a4;
LABEL_12:
  LOBYTE(a2) = v7;
  EtwTracePsIoAttribution((unsigned int)Object[367], a2, v10, v11);
  return v11;
}
