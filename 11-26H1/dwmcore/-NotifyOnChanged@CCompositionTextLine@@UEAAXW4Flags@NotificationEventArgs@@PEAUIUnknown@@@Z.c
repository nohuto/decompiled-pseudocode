/*
 * XREFs of ?NotifyOnChanged@CCompositionTextLine@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18026B700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionTextLine::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float *v10; // r8

  if ( *(_QWORD *)(a1 + 88) )
  {
    v6 = *(float *)(a1 + 80) + *(float *)(a1 + 72);
    v7 = (float)(*(float *)(a1 + 84) + *(float *)(a1 + 76)) + *(float *)(a1 + 96);
    v8 = v6 + *(float *)(a1 + 100);
    v9 = v7 + *(float *)(a1 + 104);
    v10 = *(float **)(a1 + 112);
    v10[28] = v6;
    v10[29] = v7;
    v10[30] = v8;
    v10[31] = v9;
    (*(void (__fastcall **)(float *, _QWORD, float *))(*(_QWORD *)v10 + 80LL))(v10, 0LL, v10);
  }
  return CResource::NotifyOnChanged(a1, a2, a3);
}
