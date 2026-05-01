/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180048810
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x18004C5AC (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x18006499C (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  __int64 v4; // rsi
  DWORD CurrentThreadId; // edi
  HRESULT ApartmentType; // ebx
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  ZBAND_NOTIFICATION_DATA *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  APTTYPE pAptType; // [rsp+50h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+18h] BYREF

  v4 = (a1 + 96) & -(__int64)(a1 != 88);
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v4 + 0x2C)) || *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_10;
  CurrentThreadId = 0;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_16;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_8;
  if ( pAptType != APTTYPE_MTA )
  {
    if ( pAptType == APTTYPE_NA )
    {
      CurrentThreadId = -1;
      goto LABEL_9;
    }
    if ( pAptType == APTTYPE_MAINSTA )
LABEL_8:
      CurrentThreadId = GetCurrentThreadId();
  }
LABEL_9:
  if ( CurrentThreadId == *(_DWORD *)(v4 + 40) )
  {
LABEL_10:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
    goto LABEL_11;
  }
  ApartmentType = -2147417842;
LABEL_16:
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_11:
  v8 = *(_DWORD **)(a1 + 248);
  if ( v8 )
  {
    if ( *v8 != a2 && *v8 )
    {
      v10 = 0;
      if ( a2 != *(_DWORD *)(a1 + 144) )
        v10 = a2;
      *v8 = v10;
    }
    v9 = *(ZBAND_NOTIFICATION_DATA **)(a1 + 248);
    if ( *(_DWORD *)v9 )
      *(_DWORD *)(a1 + 144) = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 && *((_QWORD *)v9 + 1) )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 88));
    }
    else
    {
      if ( v9 )
        ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v9, v7);
      *(_QWORD *)(a1 + 248) = 0LL;
    }
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
