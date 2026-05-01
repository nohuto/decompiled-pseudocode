/*
 * XREFs of ??_G?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180017360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800101F0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System.c)
 *     ??3@YAXPEAX@Z @ 0x18001283C (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
