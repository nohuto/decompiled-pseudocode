/*
 * XREFs of PiUEventCacheObjectProperties @ 0x140AA6D44
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventCacheObjectProperties(__int64 a1)
{
  _DWORD *v1; // r15
  PVOID *v2; // r14
  int v4; // ecx
  void *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int ObjectProperty; // eax
  int v16; // ecx
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v1 = (_DWORD *)(a1 + 60);
  v2 = (PVOID *)(a1 + 48);
  LODWORD(v17) = 0;
  LODWORD(v18) = 0;
  v4 = *(_DWORD *)(a1 + 96);
  v5 = 0LL;
  v19 = 0LL;
  *v1 = -1;
  *v2 = 0LL;
  v6 = v4 - 1;
  if ( !v6 )
  {
LABEL_5:
    v10 = a1 + 128;
    goto LABEL_6;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v16 = v9 - 5;
        if ( v16 )
        {
          if ( (unsigned int)(v16 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_5;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x59706E50u,
                     0xC8u,
                     a1 + 144,
                     3,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     &v17,
                     (PVOID *)&v19,
                     (unsigned int *)&v18,
                     0);
  v5 = (void *)v19;
  v12 = ObjectProperty;
  if ( ObjectProperty < 0 )
    goto LABEL_10;
  v10 = v19;
LABEL_6:
  v11 = PnpGetObjectProperty(
          0x59706E50u,
          0x200u,
          v10,
          1,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
          &v17,
          v2,
          (unsigned int *)&v18,
          0);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v17 != 19 )
    {
      ExFreePoolWithTag(*v2, 0x59706E50u);
      *v2 = 0LL;
    }
    goto LABEL_8;
  }
  if ( v11 == -1073741275 || v11 == -1073741772 )
  {
LABEL_8:
    v13 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            v10,
            1,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_SessionId,
            &v17,
            (__int64)v1,
            4u,
            (__int64)&v18,
            0);
    v12 = v13;
    if ( v13 == -1073741275 || v13 == -1073741772 )
      v12 = 0;
  }
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x59706E50u);
  return v12;
}
