/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18021A580
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1801090F4 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( a3 != 52 )
    goto LABEL_18;
  switch ( a2 )
  {
    case 1:
      v5 = 160LL;
      break;
    case 2:
      v5 = 172LL;
      break;
    case 3:
      v5 = 184LL;
      break;
    case 4:
      v5 = 196LL;
      break;
    default:
LABEL_18:
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
      return v8;
  }
  v6 = a1 + v5;
  if ( !(a1 + v5) )
    goto LABEL_18;
  v7 = *(_QWORD *)v6 - *(_QWORD *)a4;
  if ( *(_QWORD *)v6 == *(_QWORD *)a4 )
    v7 = *(unsigned int *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v7 )
  {
    *(_QWORD *)v6 = *(_QWORD *)a4;
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a4 + 8);
    *(_BYTE *)(a1 + 272) = 1;
    CResource::NotifyOnChanged(a1, 0, 0LL);
    if ( *(_QWORD *)(a1 + 48) )
    {
      CResource::InvalidateConsumingAnimationsInternal(a1);
      if ( *(_QWORD *)(a1 + 48) )
        CResource::InvalidateConsumingAnimationsInternal(a1);
    }
  }
  return v6 == 0 ? 0x80070057 : 0;
}
