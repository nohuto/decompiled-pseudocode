/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x140070930
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  FxDeviceBase *m_DeviceBase; // rbp
  unsigned int v5; // ebx
  _IRP *v6; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  unsigned __int8 v10; // dl
  unsigned __int8 MinorFunction; // r8
  const void **p_m_ParentObject; // rsi
  unsigned int v13; // r15d
  __int64 i; // rax
  FxDriver *m_Driver; // rcx
  __int64 v16; // rbp
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  _IO_STACK_LOCATION *v20; // rax
  _LIST_ENTRY *v21; // r13
  _WORD *v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rdx
  int Blink_high; // ecx
  unsigned int v26; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 PreviousIrql; // [rsp+20h] [rbp-68h]
  unsigned int v30; // [rsp+24h] [rbp-64h]
  unsigned int LowPart; // [rsp+28h] [rbp-60h]
  unsigned int v32; // [rsp+34h] [rbp-54h]
  FxDeviceBase *v33; // [rsp+38h] [rbp-50h]
  FxDriver *v34; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  _IRP *v36; // [rsp+98h] [rbp+10h]

  v36 = Irp;
  m_DeviceBase = This->m_DeviceBase;
  v5 = 0;
  irql = 0;
  v6 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v30 = 0;
  v33 = m_DeviceBase;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( SLOBYTE(This->m_ObjectFlags) < 0
    && (Flink = This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Provider);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
    irql = v10;
  }
  p_m_ParentObject = 0LL;
  v13 = 32 * This->m_NumProviders + 24;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (const void **)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    for ( i = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags; i; i = *(_QWORD *)(i + 224) )
    {
      if ( *(_QWORD *)(i + 272) )
      {
        p_m_ParentObject = (const void **)(i + 264);
        break;
      }
    }
    m_DeviceBase = This->m_DeviceBase;
    v33 = m_DeviceBase;
  }
  m_Driver = m_DeviceBase->m_Driver;
  v16 = 32 * This->m_NumProviders + 26;
  v34 = m_Driver;
  if ( p_m_ParentObject )
    v16 = *(unsigned __int16 *)p_m_ParentObject + (unsigned int)v16;
  v17 = v16 + m_Driver->m_RegistryPath.Length;
  if ( v17 >= (unsigned int)v16 && (v18 = v17 + 2, v32 = v17 + 2, v17 + 2 >= v17) )
  {
    Parameters->NamedPipeType = v18;
    if ( v18 > LowPart )
    {
      v30 = 4;
    }
    else
    {
      Parameters->ReadMode = 0;
      Parameters->MaximumInstances = v13;
      Parameters->CompletionMode = v16;
      Parameters->InboundQuota = This->m_NumProviders;
      v20 = v6->Tail.Overlay.CurrentStackLocation;
      v21 = This->m_ProvidersListHead.Flink;
      v30 = v17 + 2;
      MinorFunction = v20->MinorFunction;
      PreviousIrql = MinorFunction;
      if ( This->m_NumProviders )
      {
        v23 = 0;
        do
        {
          v24 = 32LL * v23;
          *(_LIST_ENTRY *)((char *)&Parameters->DefaultTimeout.LowPart + v24) = v21[3];
          *(unsigned int *)((char *)&Parameters[1].ReadMode + v24) = (unsigned int)v21[2].Flink;
          Blink_high = HIDWORD(v21[4].Blink);
          if ( (Blink_high & 4) != 0 )
          {
            v26 = 528384;
          }
          else
          {
            v26 = (HIDWORD(v21[4].Blink) & 2 | 0x40u) >> 1;
            if ( (Blink_high & 1) != 0 )
              v26 |= 0x40u;
          }
          if ( BYTE2(v21[5].Blink) )
          {
            v26 |= 0x10000u;
            BYTE2(v21[5].Blink) = 0;
          }
          *(unsigned int *)((char *)&Parameters[1].NamedPipeType + v24) = v26;
          m_DeviceObject = v33->m_PhysicalDevice.m_DeviceObject;
          *(_QWORD *)((char *)&Parameters[1].CompletionMode + v24) = m_DeviceObject;
          if ( MinorFunction == 11 )
          {
            ObfReferenceObject(m_DeviceObject);
            MinorFunction = PreviousIrql;
          }
          v21 = v21->Flink;
          ++v23;
        }
        while ( v23 < This->m_NumProviders );
        v18 = v32;
      }
      v6 = v36;
    }
    FxNonPagedObject::Unlock(This, irql, MinorFunction);
    if ( v18 <= LowPart )
    {
      v22 = (_WORD *)((char *)Parameters + v13);
      if ( p_m_ParentObject )
      {
        *v22 = *(_WORD *)p_m_ParentObject;
        memmove(v22 + 1, p_m_ParentObject[1], *(unsigned __int16 *)p_m_ParentObject);
      }
      else
      {
        *v22 = 0;
      }
      *(_WORD *)((char *)&Parameters->NamedPipeType + v16) = v34->m_RegistryPath.Length;
      memmove(
        (char *)&Parameters->NamedPipeType + (unsigned int)v16 + 2,
        v34->m_RegistryPath.Buffer,
        v34->m_RegistryPath.Length);
    }
  }
  else
  {
    v5 = -1073741675;
    FxNonPagedObject::Unlock(This, v10, MinorFunction);
  }
  v6->IoStatus.Information = v30;
  v6->IoStatus.Status = v5;
  IofCompleteRequest(v6, 0);
  return v5;
}
