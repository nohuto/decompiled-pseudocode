/*
 * XREFs of ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180079130
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDeviceSettings(
        SpatialAudioDevicePropertyReader *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  size_t v5; // r12
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  const void *v14; // rdx
  int v16; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v17; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      *(_OWORD *)a2 = *((_OWORD *)this + 27);
      *((_OWORD *)a2 + 1) = *((_OWORD *)this + 28);
      *((_OWORD *)a2 + 2) = *((_OWORD *)this + 29);
      *((_OWORD *)a2 + 3) = *((_OWORD *)this + 30);
      *((_QWORD *)a2 + 8) = *((_QWORD *)this + 62);
      if ( (_DWORD)v5 )
      {
        v14 = (const void *)*((_QWORD *)this + 63);
        if ( v14 )
        {
          if ( a3 && (v11 = v5, v10 = 834LL * *((unsigned int *)this + 106), v5 == v10) )
          {
            memcpy_0(a3, v14, v5);
          }
          else
          {
            v9 = -2147024809;
            if ( (unsigned int)dword_1801D32E8 > 2 )
            {
              v16 = 724;
              v13 = (unsigned __int8 *)&unk_1801A8DEE;
              goto LABEL_18;
            }
          }
        }
        else
        {
          v9 = -2147418113;
          if ( (unsigned int)dword_1801D32E8 > 2 )
          {
            v16 = 723;
            v13 = (unsigned __int8 *)&unk_1801A8D40;
            goto LABEL_18;
          }
        }
      }
    }
    else
    {
      v9 = -2147024809;
      if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v16 = 717;
        v13 = (unsigned __int8 *)&unk_1801A8D7A;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v9 = -2147418113;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v16 = 716;
      v13 = (unsigned __int8 *)&unk_1801A8E9C;
LABEL_18:
      v17 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
      v18 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        v13,
        v11,
        v12,
        &v17,
        (__int64)&v16,
        (__int64)&v18);
    }
  }
  return v9;
}
