/*
 * XREFs of RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006DCFC
 * Callers:
 *     RaidAdapterStorageSetPropertyIoctl @ 0x14006B998 (RaidAdapterStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1400917FC (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidSetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int *p_Type; // rsi
  int v5; // r10d
  unsigned int *v6; // r14
  unsigned __int64 Options; // rdi
  int v8; // r13d
  unsigned __int64 Length; // r9
  int v10; // eax
  int v11; // edi
  char v12; // bl
  unsigned int v13; // eax
  _DWORD *v14; // r12
  __int64 v15; // r11
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  char v21[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-14h] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-10h] BYREF
  char v27; // [rsp+B8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  p_Type = (int *)&a2->AssociatedIrp.MasterIrp->Type;
  v5 = (int)a2;
  v6 = 0LL;
  v23 = 0LL;
  v22 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = 1;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = *p_Type;
  v21[0] = 0;
  v27 = 0;
  *a3 = 0LL;
  if ( v10 == 49 )
  {
    v12 = 0;
    v13 = 72;
  }
  else
  {
    if ( v10 != 67 )
      return (unsigned int)-1073741585;
    v12 = 1;
    v13 = 80;
  }
  if ( (unsigned int)Options < v13 )
    return (unsigned int)-1073741585;
  if ( v12 )
  {
    if ( p_Type[2] != 1 || p_Type[3] != 72 )
      return (unsigned int)-1073741585;
    v14 = p_Type + 4;
  }
  else
  {
    v14 = p_Type + 2;
  }
  v15 = (unsigned int)v14[5];
  v16 = (unsigned int)v14[4];
  if ( Options < (unsigned __int64)v14 + v16 + v15 - (_QWORD)p_Type )
    return (unsigned int)-1073741585;
  if ( *v14 && v14[1] && (!(_DWORD)v16 || (unsigned int)v16 >= 0x40 && (_DWORD)v15) )
  {
    if ( (unsigned int)Length >= 0x48 )
    {
      if ( Length < v15 + v16 + 8 )
        return (unsigned int)-1073741585;
      v11 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(
              *(_QWORD *)(a1 + 8),
              v5,
              (unsigned int)&v23,
              (unsigned int)&v22,
              (__int64)v21,
              (__int64)&v27);
      if ( v11 < 0 )
      {
        v6 = v23;
      }
      else
      {
        v6 = v23;
        v11 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)v23, v22, 0LL, v27, 64, 0);
        if ( v11 >= 0 )
        {
          if ( v12 )
            memmove(p_Type + 2, v14, 0x40uLL);
          else
            v8 = 72;
          *p_Type = v8;
          v17 = p_Type[7];
          p_Type[1] = 72;
          p_Type[8] = v6[15];
          if ( v17 )
          {
            if ( v17 >= v6[14] )
              v17 = v6[14];
            v18 = v17;
            memmove((char *)p_Type + (unsigned int)p_Type[6] + 8, (char *)v6 + v6[13] + 36, v17);
            v19 = p_Type[6] + 8;
            p_Type[7] = v18;
            *a3 = v18 + v19;
          }
          else
          {
            *a3 = 72LL;
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)Length < 8 )
        return (unsigned int)-1073741789;
      *p_Type = v12 != 0 ? 1 : 72;
      v11 = 0;
      p_Type[1] = 72;
      *a3 = 8LL;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72536152u);
  return (unsigned int)v11;
}
