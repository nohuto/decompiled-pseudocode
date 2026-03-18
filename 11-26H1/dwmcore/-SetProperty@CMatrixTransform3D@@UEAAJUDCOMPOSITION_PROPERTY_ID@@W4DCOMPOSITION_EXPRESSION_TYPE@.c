/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027B040
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  float *v5; // rbx
  unsigned int v6; // ebx

  if ( a3 == 18
    && (v4 = *a4, (unsigned int)(a2 - 1) <= 0xF)
    && (v5 = (float *)(a1 + 4 * (((a2 - 1) & 3) + 40LL + 4 * ((unsigned __int64)(unsigned int)(a2 - 1) >> 2)))) != 0LL )
  {
    if ( *v5 != v4 )
    {
      *v5 = v4;
      CResource::NotifyOnChanged(a1, 0, 0LL);
    }
    return v5 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x44u, 0LL);
  }
  return v6;
}
