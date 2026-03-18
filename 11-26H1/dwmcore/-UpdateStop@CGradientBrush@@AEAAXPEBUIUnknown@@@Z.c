/*
 * XREFs of ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z @ 0x18021CF80
 * Callers:
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18015ABB0 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::UpdateStop(CGradientBrush *this, const struct IUnknown *a2)
{
  __int64 v2; // r11
  __int64 v3; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  __m128i v7; // xmm1
  __int64 v8; // rdx
  int v9; // xmm0_4
  __int64 v10; // rcx
  _BYTE v11[20]; // [rsp+0h] [rbp-28h]

  v2 = *((_QWORD *)this + 16);
  v3 = 0LL;
  v5 = (*((_QWORD *)this + 17) - v2) >> 3;
  while ( (unsigned int)v3 < v5 )
  {
    v6 = *(_QWORD *)(v2 + 8 * v3);
    if ( a2 == (const struct IUnknown *)v6 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(v6 + 76));
      v8 = 5 * v3;
      v9 = *(_DWORD *)(v6 + 72);
      v10 = *((_QWORD *)this + 27);
      *(__m128i *)&v11[4] = v7;
      *(_DWORD *)v11 = v9;
      *(_OWORD *)(v10 + 4 * v8) = *(_OWORD *)v11;
      *(_DWORD *)(v10 + 4 * v8 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
      *((_BYTE *)this + 240) = 0;
      return;
    }
    v3 = (unsigned int)(v3 + 1);
  }
}
